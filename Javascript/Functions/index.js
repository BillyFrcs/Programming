// Arrow function
const Hello = () =>
{
     return "Hello World!";
}

// Arrow function without body
const Something = () => console.log("Yoo World!");

console.log(Hello());
Something();

console.log();

const students = [
     { ID: 1, present: true },
     { ID: 2, present: true },
     { ID: 3, present: false },
];

// Without arrow function
const presentStudent = students.filter(function (student)
{
     return student.present;
});

// With arrow function
const presentStudent2 = students.filter(student => student.present);

console.log(presentStudent);
console.log(presentStudent2 + "\n");

const square = (n) => { return n * n; }

console.log("Square: " + square(5));