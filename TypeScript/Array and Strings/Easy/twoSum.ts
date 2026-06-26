// here the complexity is: O(n ^ 2) because we have a nested loop
function twoSum(nums: number[], target: number): number[] {
    const len: number = nums.length;
    const arr: number[] = [];

    for (let i = 0; i < len; i++) {
        for (let j = i + 1; j < len; j++) {
            if ((nums[i] + nums[j]) === target) {
                arr.push(i);
                arr.push(j);
            }
        }
    }
    return arr;
}

console.log(twoSum([3,4,5,6], 7));
console.log(twoSum([4,5,6], 10));
console.log(twoSum([5, 5], 10));