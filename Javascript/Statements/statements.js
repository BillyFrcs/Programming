let movementSpeed = 100
let canMove = true;

// if statements
if (movementSpeed > 0 && canMove === true) {
     console.log("Moving forward at speed " + movementSpeed);
}
else {
     console.log("Stopping");
}

let flag1 = false;
let flag2 = false;
let flag3 = true;

// Nesting if statements
if (flag1) {
     console.log('This will not print.');
} else {
     if (flag2) {
          console.log('This will not print either.');
     } else {
          if (flag3) {
               console.log('This will print! \n');
          }
     }
}

if (5 - 3 - 2) {
     console.log('A');
} else {
     console.log('B');
}

if (5) {
     console.log('A');
}

console.log('B \n');

if ('') {
     console.log('A');
} else {
     if (null) {
          console.log('B');
     } else {
          console.log('C');
     }

     if (1) {
          console.log('D');
     } else {
          console.log('E');
     }
}

console.log('\n');

if ('')
     console.log('A');
else
     if (null)
          console.log('B');
console.log('C');

if (5 - 100)
     console.log('D');
else
     console.log('E');
console.log('F');