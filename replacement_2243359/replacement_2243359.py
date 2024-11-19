def replacement_selection_sort(input_file, output_file, buffer_size=5):
    with open(input_file, 'r') as infile, open(output_file, 'w') as outfile:
        test_cases = int(infile.readline().strip())
        
        for _ in range(test_cases):
            n = int(infile.readline().strip())
            numbers = list(map(int, infile.readline().strip().split()))
            
            buffer = sorted(numbers[:buffer_size])
            remaining_data = numbers[buffer_size:]
            runs = []
            current_run = []
            next_buffer = []

            while True:
                if buffer:
                    min_value = buffer.pop(0)
                    current_run.append(min_value)
                    
                    if remaining_data:
                        next_value = remaining_data.pop(0)
                        if next_value >= min_value:
                            buffer.append(next_value)
                            buffer.sort()
                        else:
                            next_buffer.append(next_value)

                if not buffer:
                    runs.append(current_run)
                    current_run = []
                    if next_buffer:
                        buffer = next_buffer
                        buffer.sort()
                        next_buffer = []
                    else:
                        break
                    
            outfile.write(f"{len(runs)}\n") 
            for run in runs:
                outfile.write(" ".join(map(str, run)) + "\n")

replacement_selection_sort("replacement_input.txt", "replacement_output.txt")
