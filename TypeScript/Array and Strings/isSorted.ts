// complexity O(n)
function isSorted(arr: number[]): boolean {
    const len = arr.length;

    for (let i = 0; i < len; i++) {
        if (arr[i] > arr[i + 1])
            return false;
    }

    return true;
}

console.log(isSorted([10, 20, 30, 40, 50]));
console.log(isSorted([90, 80, 100, 70, 40, 30]));