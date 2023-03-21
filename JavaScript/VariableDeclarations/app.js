const readline = require("readline");

const input = readline.createInterface({
     input: process.stdin,
     output: process.stdout
});

input.question("Enter your name: ", function (name) {
     console.log("Hello " + name);

     input.close();
});