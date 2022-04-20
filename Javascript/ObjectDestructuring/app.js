const data =
{
     name: "Billy",
     age: 18,
     ID: 190820
};

const name = data.name;
const age = data.age;
const ID = data.ID;

console.log(`Name: ${name}`);
console.log('Age: ' + age);
console.log('ID: ' + ID + '\n');

const student =
{
     ID: '21',
     name: 'Sendy',
     GPA: '9.0',
};

const { name: n } = student;
const { GPA: g } = student;
const { ID: i } = student;

console.log("Name " + n + "\nGPA " + g + "\nID " + i);