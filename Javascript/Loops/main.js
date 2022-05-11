let check = false;
let number = 1;

// Display odd numbers
for (let i = 1; check == false; i++) {
     if (i % 2 === 1) {
          console.log(`${i} is odd`);
          if (number == 10)
               check = true;
          number++;
     }
}

console.log();

const n = 9;

// Even & Odd numbers
for (let i = number; i < number + 10; i++) {
     if (i % 2 === 0) {
          console.log(`${i} is even`);
     }
     else {
          console.log(`${i} is odd`);
     }
}