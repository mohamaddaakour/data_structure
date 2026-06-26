function scoreOfString(s: string): number {
    const len: number = s.length;
    let result: number = 0;

    for (let i: number = 0; i < len - 1; i++) {
        result += Math.abs(s.charCodeAt(i) - s.charCodeAt(i + 1));
    }
    return result;
};

console.log(scoreOfString("hello"));
console.log(scoreOfString("zaz"));