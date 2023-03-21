for (let i = 1; i <= 10; i++) {
     console.log(i);
}

console.log();

fruits = ['apples', 'oranges', 'bananas', 'pears', 'grapes', 'mangos'];

// Forwards
for (let i = 0; i < fruits.length; i++) {
     console.log(fruits[i]);
}

console.log();

// Backwards
for (let i = fruits.length - 1; i >= 0; i--) {
     console.log(fruits[i]);
}

// Infinite loops
/*
for (let i = 0; true; i++) {
     console.log("Infinite loop: " + i);
}
*/

let i = 0;

while (i < 10) {
     i++;

     console.log(i);
}

do {
     i++;

     console.log(i);
} while (i < 20);