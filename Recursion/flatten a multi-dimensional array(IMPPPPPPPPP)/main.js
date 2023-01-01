//let arr = [[3, 2, 1], [4, 6, 5], [], [9, 7, 8]];
let arr = [1, 2, [3, 4, 5, [6]], 7, 8];
let ans = [];
const flatten = (arr, idx) => {
  //base condition
  if (arr.length > idx) {
    if (Array.isArray(arr[idx])) flatten(arr[idx], 0);
    else ans.push(arr[idx]);
    flatten(arr, idx + 1);
  }
};
flatten(arr, 0);
console.log(ans);
