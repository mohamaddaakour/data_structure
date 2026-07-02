function numIdenticalPairs(nums: number[]): number {
    const len: number = nums.length;
    let count: number = 0;

    for (let i: number = 0; i < len; i++) {
        for (let j: number = 0; j < len; j++) {
            if (nums[i] === nums[j] && i < j)
                count++;
        }
    }
    return count;
};