function minimumOperations(nums: number[]): number {
    const len: number = nums.length;
    let count: number = 0;

    for (let i: number = 0; i < len; i++) {
        if (nums[i] % 3 === 0)
            continue;
        else
            count++;
    }
    return count;
};

console.log(minimumOperations([1,2,3,4]));
console.log(minimumOperations([3,6,9]));