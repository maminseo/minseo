import heapq

def replacement_selection(input_list, memory_size):
    if memory_size <= 0:
        raise ValueError("Memory size must be greater than 0")

    # Initialize the heap with the first 'memory_size' elements
    heap = input_list[:memory_size]
    heapq.heapify(heap)
    output = []

    for element in input_list[memory_size:]:
        smallest = heapq.heappop(heap)
        output.append(smallest)
        heapq.heappush(heap, element)

    # Append remaining elements in the heap to the output
    while heap:
        output.append(heapq.heappop(heap))

    return output

# Example usage
input_list = [5, 1, 9, 3, 7, 6, 2, 8, 4]
memory_size = 4
sorted_list = replacement_selection(input_list, memory_size)
print(sorted_list)