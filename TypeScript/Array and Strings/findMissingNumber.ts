function findMissingNumber(nums: number[]): number {
    const len: number = nums.length;

    const max: number = Math.max(...nums);

    // we calculate the sum of all numbers from one to the maximum
    // number in the array
    let sum = (max * (max + 1)) / 2;

    for (let i: number = 0; i < len; i++) {
        sum -= nums[i];
    }

    return sum;
}

console.log(findMissingNumber([2, 4, 1, 6, 7, 5]));