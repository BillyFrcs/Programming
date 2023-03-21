function add(num1, num2)
{
     let calculate = num1 * num2;

     return calculate;
}

let calculate = add(2, 3);

console.log(`Result ${calculate} \n`);

// Stopping a function
function print()
{
     console.log('This will print!');
     return;
     console.log('This will not print :(');
}

print(); // -> This will print!

console.log();

// Undefined
function check(item)
{
     if (item === undefined) {
          console.log('No item was passed in!');
          return;
     }

     console.log('The item I was given is:', item);
}

check(10); // -> The item I was given is: 10
check(); // -> No item was passed in!

// Null
function divide(num1, num2)
{
     if (num2 === undefined)
          return null;

     return num1 / num2;
}

console.log(divide(1, 0)); // -> null
console.log(divide(10, 5));

function isTruthy(condition)
{
     return !!condition;
}

console.log(isTruthy(true));