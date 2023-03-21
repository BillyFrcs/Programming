let num1 = 10;
let num2 = 5;

let addition = num1 + num2;
let subtraction = num1 - num2;
let division = num1 / num2;
let multiplication = num1 * num2;

console.log(addition);       // -> 15
console.log(subtraction);    // -> 5
console.log(division);       // -> 2
console.log(multiplication); // -> 50

let n1 = 2;
let n2 = 5;
console.log(n2 % n1);

console.log(5 % 1); // -> 0
console.log(5 % 2); // -> 1
console.log(5 % 3); // -> 2
console.log(5 % 4); // -> 1

let hello = 'Hello ';
let there = 'there!';
console.log(hello + there); // -> Hello there!

// NaN
let string1 = 'Hello ';
let string2 = 'there!';

console.log(string1 - string2); // -> NaN
console.log(string1 * string2); // -> NaN
console.log(string1 / string2); // -> NaN
console.log(string1 % string2); // -> NaN

console.log(undefined - null); // -> NaN
console.log('abc' * undefined); // -> NaN
console.log(9 % null); // -> NaN
console.log(null + 4); // -> 4

console.log(null - 7);     // -> -7
console.log('abc' + null); // -> abcnull
console.log(20 + 'abc');   // -> 20abc
console.log(9 + true);     // -> 10

// Logical Operators
console.log('\nLogical Operator');

// Falsey values become true
console.log(!false);      // -> true
console.log(!'');         // -> true
console.log(!0);          // -> true
console.log(!null);       // -> true
console.log(!undefined);  // -> true
console.log(!NaN);        // -> true

// Truthy values become false
console.log(!true);      // -> false
console.log(!1);         // -> false
console.log(!'abc');     // -> false
console.log(!9999999);   // -> false
console.log(!'ha*UIHJ'); // -> false