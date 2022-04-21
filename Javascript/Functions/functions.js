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