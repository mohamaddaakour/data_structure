// the complexity is: for split O(n), for join O(n), for sort O(n log(n))
// so the complexity is: O(n log(n))
function isAngram(s: string, t: string): boolean {
    return s.split('').sort().join('') === t.split('').sort().join('');
}

console.log(isAngram("racecar", "carrace"));
console.log(isAngram("jar", "jam"));