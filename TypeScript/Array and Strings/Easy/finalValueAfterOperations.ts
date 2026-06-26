function finalValueAfterOperations(operations: string[]): number {
    const len: number = operations.length;
    let x: number = 0;

    for (let i: number = 0; i < len; i++) {
        if (operations[i].includes("+"))
            x++;
        else
            x--;
    }
    return x;
};

console.log(finalValueAfterOperations(["--X","X++","X++"]));
console.log(finalValueAfterOperations(["++X","++X","X++"]));
console.log(finalValueAfterOperations(["X++","++X","--X","X--"]));