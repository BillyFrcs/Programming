const a = [1, 2, 3];
const b = [3, 4, 5];

const concatenation = a.concat(b); // Default concatenation
const spread = [...a, ...b];

console.log("Concatenation: " + concatenation);
console.log("Spread: " + spread);

const person = { name: "Billy" };
const student = { ID: 190820, email: "billy@games.edu" };

const newObject = { ...person, ...student, semester: "4" };

console.log(newObject);