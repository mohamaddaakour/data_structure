// the complexity is O(n) because with filter() we iterate
// over the array once
function removeEven(nums: number[]): number[] {
    return nums.filter(e => e % 2 === 0);
}

console.log(removeEven([1, 2, 3, 4, 5, 6, 7]));