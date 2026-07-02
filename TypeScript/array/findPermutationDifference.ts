function findPermutationDifference(s: string, t: string): number {
    if (s.length !== t.length)
        return 0;

    const len = s.length;
    let sum = 0;

    for (let i: number = 0; i < len; i++) {
        sum += Math.abs(s.indexOf(s[i]) - t.indexOf(s[i]));
    }
    return sum;
};

console.log(findPermutationDifference("abc", "bac"));
console.log(findPermutationDifference("abcde", "edbac"));