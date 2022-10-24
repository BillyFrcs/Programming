let currency = new Map([
    ["USD", 1400],
    ["JPY", 131],
    ["SGD", 11000],
    ["MYR", 3500]
]);

const priceInJPY = 5000;

let priceInIDR = currency.get("JPY") * priceInJPY;

console.log(priceInIDR);