def quick_sort(arr):
    # Base case: An array with 0 or 1 elements is already sorted
    if len(arr) <= 1:
        return arr

    # Step 1: Choose a pivot element (middle element in this case)
    pivot = arr[len(arr) // 2]

    # Step 2: Partition the array into three parts
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]

    # Step 3: Recursively sort the left and right parts, and combine
    return quick_sort(left) + middle + quick_sort(right)

# Example usage
arr = [43, 32, 22, 78, 63, 57, 91, 13]
sorted_arr = quick_sort(arr)
print("Sorted array is:",sorted_arr)
