// 2D array
// complexity: O(n^2)
function maximumWealth(accounts: number[][]): number {
    let sum: number = 0;
    let max: number = 0;

    const len: number = accounts.length;

    for (let i: number = 0; i < len; i++) {
        for (let j: number = 0; j < accounts[i].length; j++) {
            sum += accounts[i][j];
        }
        if (sum > max) {
            max = sum;
        }
        sum = 0;
    }
    return max;
};

console.log(maximumWealth([[1,2,3],[3,2,1]]));
console.log(maximumWealth([[1,5],[7,3],[3,5]]));
console.log(maximumWealth([[2,8,7],[7,1,3],[1,9,5]]));