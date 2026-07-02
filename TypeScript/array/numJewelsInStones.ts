function numJewelsInStones(jewels: string, stones: string): number {
    const jewelsLength: number = jewels.length;
    const stonesLength: number = stones.length;
    let count: number = 0;

    for (let i: number = 0; i < jewelsLength; i++) {
        for (let j: number = 0; j < stonesLength; j++) {
            if (jewels[i] === stones[j])
                count++;
        }
    }
    return count;
};

console.log(numJewelsInStones("aA", "aAAbbbb"));
console.log(numJewelsInStones("z", "ZZ"));