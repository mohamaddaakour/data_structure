function convertTemperature(celsius: number): number[] {
    return [celsius + 273.15, celsius * 1.80 + 32.0 ];
}

console.log(convertTemperature(36.50));
console.log(convertTemperature(122.11));