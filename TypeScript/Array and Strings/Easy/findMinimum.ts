function findMinimum(nums: number[]): number {
    const len = nums.length;
    let min = nums[0];

    for (let i = 0; i < len; i++) {
        if (nums[i] < min)
            min = nums[i];
    }
    return min;
}

console.log(findMinimum([]));
console.log(findMinimum([1]));
console.log(findMinimum([1, 2]));
console.log(findMinimum([1, 2, 10, 1, 18]));