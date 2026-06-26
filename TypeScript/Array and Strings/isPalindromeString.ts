// worst case complexity: O(n) => it is O(n/2) but we remove constant
// best case complexity: O(1) => if from the first iteration they are not the same letters
function isPalindromeString(str: string): boolean {
    let first: number = 0;
    let last: number = str.length - 1;

    while (first < last) {
        if (str[first++] !== str[last--])
            return false;
    }
    return true;
}

console.log(isPalindromeString("madam"));