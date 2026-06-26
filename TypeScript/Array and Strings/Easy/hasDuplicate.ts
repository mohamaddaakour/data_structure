// first method with complexity O(n ^ 2)

// complexity O(n ^ 2), because we have nested loop
// n * n = n ^ 2
// function hasDuplicate(nums: number[]): boolean {
//     const len: number = nums.length;

//     // const newArray = Array(len).fill(0);

//     for (let i = 0; i < len; i++) {
//         for (let j = i + 1; j < len; j++) {
//             if (nums[i] === nums[j]) {
//                 return true;
//             }
//         }
//     }
//     return false;
// }


// second method with complexity O(n)
// here O(n) because we iterate in the whole array to create the set
function hasDuplicate(nums: number[]): boolean {
    const len: number = nums.length;

    const seen = new Set(nums);

    if (seen.size != len) return true;
    return false;
}

console.log(hasDuplicate([1, 2, 3, 3]));
console.log(hasDuplicate([1, 2, 3, 4]));