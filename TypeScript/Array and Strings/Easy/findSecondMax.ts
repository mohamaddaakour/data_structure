function findSecondMax(nums: number[]): number {
    const len = nums.length;
    nums.sort();
    const max = nums[len - 1];
    let secondMax = nums[0];

    for (let i = 0; i < len; i++) {
        if (nums[i] > secondMax && nums[i] < max)
            secondMax = nums[i];
    }
    return secondMax;
}

console.log(findSecondMax([]));
console.log(findSecondMax([1]));
console.log(findSecondMax([1, 2]));
console.log(findSecondMax([1, 2, 1, 2, 3, 1, 1]));
console.log(findSecondMax([1, 2, 4, 3, 2, 1, 2, 6, 6, 6, 6]));