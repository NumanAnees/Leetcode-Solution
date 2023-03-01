## Solution

- Use unordered_map and check if k%arr[i] is 0 and k/arr[i] is present in map then count++;

## Note

for non repeating values in array use count++;
for repeating values in array use count += m[k - arr[i]]; or multiply 2(non repeating values 's pairs).
