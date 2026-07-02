// complexity: O(n)
function numberOfEmployeesWhoMetTarget(hours: number[], target: number): number {
    let count: number = 0;
    const len: number = hours.length;

    for (let i: number = 0; i < len; i++) {
        if (hours[i] >= target)
            count++;
    }
    return count;
};

console.log(numberOfEmployeesWhoMetTarget([0,1,2,3,4], 2));
console.log(numberOfEmployeesWhoMetTarget([5,1,4,2,2], 6));