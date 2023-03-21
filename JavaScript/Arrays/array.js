let array = [];
console.log(array); // -> []

let items = [19, true, 'Billy', 55, "Yooo", false];

// Accessing items
console.log(items);

// Display all items in the array
for (let i = 0; i < items.length; i++) {
     console.log(items[i]);
}

console.log();

// Access the index of an item
console.log(items[0]);
console.log(items[1]);
console.log(items[2]);
console.log(items[3]);
console.log(items[4]);
console.log(items[5]);

console.log("Array length: ", items.length);

// Update array items
items[4] = "Hello";
console.log(items[4]);

// Adding new array items
items.push("New Item");
items[7] = 88;
console.log(items[6]);
console.log(items[7]);

console.log();

let number = [1, 2, 3];
console.log(number.length + number[2]);

let arr = [1, 2, 3];
arr[3] = 4;

console.log(arr.length + arr[4]); // NaN