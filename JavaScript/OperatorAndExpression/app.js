// Arithmetic Operators
console.log("****Arithmetic Operators****\n")
console.log("2 + 3 = " + (2 + 3))
console.log("2 - 3 = " + (2 - 3))
console.log("2 * 3 = " + (2 * 3))
console.log("6 / 3 = " + (6 / 3))
console.log("7 / 3 = " + Math.floor(7 / 3))

// Assignment Operators
console.log("\n****Assignment Operators****\n")
var x = 3;
console.log("x = " + x)
console.log("x += 1 gives x = " + (x += 1)) // adds 1
console.log("x -= 1 gives x = " + (x -= 1)) // subtracts 1
console.log("x *= 3 gives x = " + (x *= 3)) // multiplies 3 with x
console.log("x /= 3 gives x = " + (x /= 3)) // divides x by 3

//Logical Operators
console.log("\n****Logical Operators****\n")
console.log("1 OR 1 = " + (1 || 1)) // 1 OR 1
console.log("1 OR 0 = " + (1 || 0)) // 1 OR 0
console.log("0 OR 0 = " + (0 || 0)) // 0 OR 0
console.log("1 AND 1 = " + (1 && 1)) // 1 AND 1
console.log("1 AND 0 = " + (1 && 0)) // 1 AND 0
console.log("0 AND 0 = " + (0 && 0)) // 0 AND 0
console.log(!true)  // NOT TRUE
console.log(!1)     // NOT TRUE
console.log(!false) // NOT FALSE
console.log(!0)     // NOT FALSE

// Comma operator
console.log("\n****Comma Operator****")
var a = 5;
a = (a++, a);
console.log("The value for expression with comma operator is: " + a) // returns 6

// Comparison operators
console.log("\n****Comparison Operators****")
console.log(1 > 2) // false
console.log(1 < 2) // true
console.log(1 == 1) // true
console.log(1 != 1) // false

// Bitwise Operator
console.log("\n****Bitwise Operators****")
console.log("Bitwise AND of 5 and 1: " + (5 & 1)) //returns 1
console.log("Bitwise OR of 5 and 1: " + (5 | 1)) // returns 5 
console.log("Bitwise XOR of 5 and 1: " + (5 ^ 1)) // returns 4

// String Operator
console.log("\n****String Operator****")
console.log("Concatenation" + " (+)" + " operator in action")

// Conditional Operator
console.log("\n ****Conditional Operator****")
var num_of_months = 13
var ans = (num_of_months > 12) ? "Invalid" : "Valid"
console.log(ans) // Returns Invalid

console.log(1 == 1); // returns true
console.log('1' == 1); // returns true
console.log(1 === 1); // returns true
console.log('1' === 1); // returns false