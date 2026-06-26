function smallestEvenMultiple(n: number): number {
    let result: number = 0;
    for (let i = 1; i <= 10000; i++) {
        if (i % 2 === 0 && i % n === 0) {
            result = i;
            break;
        }
    }
    return result;
};

console.log(smallestEvenMultiple(5));
console.log(smallestEvenMultiple(6));