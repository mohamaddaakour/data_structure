function kidsWithCandies(candies: number[], extraCandies: number): boolean[] {
    const max: number = Math.max(...candies);

    const newArray = candies.map(e => {
        const num: number = e + extraCandies;

        return num >= max;
    })
    return newArray;
};

console.log(kidsWithCandies([2,3,5,1,3], 3));
console.log(kidsWithCandies([4,2,1,1,2], 1));
console.log(kidsWithCandies([12,1,12], 10));