function differenceOfSums(n: number, m: number): number {
    let nums1: number = 0;
    let nums2: number = 0;

    for (let i: number = 1; i <= n; i++) {
        if (i % m !== 0)
            nums1 += i;
        else
            nums2 += i;
    }
    
    return nums1 - nums2;
};

console.log(differenceOfSums(10, 3));
console.log(differenceOfSums(5, 6));
console.log(differenceOfSums(5, 1));