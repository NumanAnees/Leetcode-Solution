//--------------------------------Left and right pointer approach-------------------------------

// assume 0 is the first index in array
// and n is the total number of elements in array
left = 0
right = n - 1
while left is less than right
    sum = array[left] + array[right]
    if sum == val return true
    if sum is less than val
        // sum is smaller than value
        // means pair can only exist to the
        // right of left element, so left element
        // should be moved one step next
        left = left + 1
    else
        // sum is greater than value
        // means pair can only exist to the
        // left of right element, so right element
        // should be moved one step previous
        right = right - 1
