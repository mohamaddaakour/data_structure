function shuffle(nums: number[], n: number): number[] {
    const len: number = nums.length;
    const arr: number[] = Array(len);

    for (let i: number = 0; i < n; i++) {
        arr[2 * i] = nums[i];
        arr[2 * i + 1] = nums[i + n];
    }
    return arr;
};

console.log(shuffle([2,5,1,3,4,7], 3));
console.log(shuffle([1,2,3,4,4,3,2,1], 4));
console.log(shuffle([1,1,2,2], 2));