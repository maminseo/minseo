import heapq

def replacement_selection_sort(buffer_size, data):
    buffer = []
    runs = []
    current_run = []

    for value in data:
        if len(buffer) < buffer_size:
            heapq.heappush(buffer, value)
        else:
            if value >= buffer[0]:
                current_run.append(heapq.heappushpop(buffer, value))
            else:
                current_run.append(heapq.heappop(buffer))
                heapq.heappush(buffer, value)
        
        if len(current_run) == buffer_size:
            runs.append(current_run)
            current_run = []

    while buffer:
        current_run.append(heapq.heappop(buffer))
        if len(current_run) == buffer_size:
            runs.append(current_run)
            current_run = []

    if current_run:
        runs.append(current_run)

    return runs

def process_test_cases(input_file, output_file, buffer_size):
    with open(input_file, 'r') as infile:
        lines = infile.readlines()

    test_cases = int(lines[0].strip())
    index = 1
    results = []

    for _ in range(test_cases):
        n = int(lines[index].strip())
        data = list(map(int, lines[index + 1].strip().split()))
        index += 2

        runs = replacement_selection_sort(buffer_size, data)
        results.append(f"{len(runs)}")
        for run in runs:
            results.append(" ".join(map(str, run)))

    with open(output_file, 'w') as outfile:
        outfile.write("\n".join(results))

if __name__ == "__main__":
    input_file = 'replacement_input.txt'
    output_file = 'replacement_output.txt'
    buffer_size = 5
    process_test_cases(input_file, output_file, buffer_size)