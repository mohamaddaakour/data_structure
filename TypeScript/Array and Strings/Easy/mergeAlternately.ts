function mergeAlternately(word1: string, word2: string): string {
    const len1: number = word1.length;
    const len2: number = word2.length;
    let newString: string = "";

    let j: number = 0;
    let k: number = 0;

    for (let i: number = 0; i < Math.max(len1, len2); i++) {
        while (j < len1) {
            newString += word1[j++];
            break;
        }
        while (k < len2) {
            newString += word2[k++];
            break;
        }
    }

    while (j < len1) {
        newString += word1[j++];
    }

    while (k < len2) {
        newString += word1[k++];
    }

    return newString;
};

console.log(mergeAlternately("abc", "pqr"));
console.log(mergeAlternately("ab", "pqrs"));
console.log(mergeAlternately("abcd", "pq"));