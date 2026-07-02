function isPalindrome(x: number): boolean {
    if (x < 0)
        return false;

    let reversed: number = 0;
    let original: number = x;

    while (original > 0) {
        reversed = original % 10 + reversed * 10;
        original = Math.floor(original / 10);
    }
    return reversed === x;
};

console.log(isPalindrome(121));
console.log(isPalindrome(-121));
console.log(isPalindrome(10));