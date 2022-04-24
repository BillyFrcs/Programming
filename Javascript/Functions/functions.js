// Function declaration
function foo()
{
     console.log("Foo");
}

foo();

// Create async function
var asyncFunc = async function ()
{
     console.log("Basic async function");
}

asyncFunc();

// Named function expression
var pi = function (r)
{
     console.log(`PI: ${3.14 * r * r}`);
};

pi(5);

// Anonymous function expression
var cube = function cube(n)
{
     return (n * n * n);
};

console.log(`Result: ${cube(3)}`);

console.log();

function printValue(someValue)
{
     console.log('The item I was given is: ' + someValue);
}

printValue('abc');     // -> The item I was given is: abc
printValue('Hello!');  // -> The item I was given is: Hello!
printValue(19);         // -> The item I was given is: 6
printValue(false);     // -> The item I was given is: false

function printValues(value1, value2)
{
     console.log(value1 + ', ' + value2);
}

printValues('xyz', 123);

console.log(1, 2, true, 'abc', 17); // -> 1 2 true 'abc' 17