// complexity O(n)
function reverse(arr: number[]): number[] {
    const reversedArray = [];
    const len = arr.length;

    for (let i = len - 1; i >= 0; i--) {
        reversedArray.push(arr[i]);
    }

    return reversedArray;
}

console.log(reverse([1, 4, 3, 2, 6, 5]));
console.log(reverse([4, 5, 1, 2]));