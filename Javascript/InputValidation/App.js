let number = 18

number = Math.floor(Math.random() * 20);

while (number < 1 || number > 10) {
     console.log(`${number} is not between 1 and 10, try again!`);

     number = Math.floor(Math.random() * 20);
}

console.log(`Cool, you got ${number}!`);

// Write your code here
let n = Math.floor(Math.random() * 100);

while (n > 50) {
     console.log(`${n} is not less than 50, try again!`);

     Math.floor(Math.random() * 100);
}

console.log(`Alright, you got ${n}`);

