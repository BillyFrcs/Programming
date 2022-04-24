function round(number)
{
     if (number % 1 === 0) {
          return number;
     }

     if (number <= 10) {
          return number - number % 1;
     }

     return number - number % 1 + 1;
}

console.log(round(15) + "\n");

function isEven(number)
{
     if (number % 2 == 0) {
          return `${number} is even`;
     }

     return `${number} is odd`;
}

console.log(isEven(10));

function detectArguments(num1, num2, num3)
{
     let undefinedNum = 3;

     if (num1 === undefined) {
          undefinedNum -= 1;
     }

     if (num2 === undefined) {
          undefinedNum -= 1;
     }

     if (num3 === undefined) {
          undefinedNum -= 1;
     }

     return undefinedNum;
}

process.stdout.write(`${detectArguments()} `);
process.stdout.write(`${detectArguments(1)} `);
process.stdout.write(`${detectArguments(1, 2)} `);
process.stdout.write(`${detectArguments(1, 2, 3)}`);