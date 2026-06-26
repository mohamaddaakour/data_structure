function swap(nums: number[], i: number, j: number): void {
    let temp: number = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

function moveZerosEnd(nums: number[]): number[] {
    const len: number = nums.length;

    for (let i: number = 0; i < len; i++) {
        for (let j: number = i + 1; j < len; j++) {
            if (nums[i] === 0 && nums[j] !== 0) {
                swap(nums, i, j);
            } 
        }
    }
    return nums;
}

console.log(moveZerosEnd([0, 1, 0, 4, 12]));
console.log(moveZerosEnd([0, 0, 0, 15, 2, 0, 0, 0, 3, 0]));