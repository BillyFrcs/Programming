let data =
{
     name: "John",
     age: 30,
     cars:
          [
               { "name": "Ford", "models": ["Fiesta", "Focus", "Mustang"] }
          ],
     profession: "teacher"
};

for (let key in data) {
     console.log(key + ":", data[key]);
}

let numbers = [23, 46, 88, 12, 34, 90];

numbers.forEach((number, index) =>
{
     console.log(number, index);
});

console.log();

numbers.forEach((number) =>
{
     console.log(number);
});

console.log();

function getFullName(data)
{
     return data.firstName + ' ' + data.lastName;
}

let names =
{
     firstName: "Joko",
     lastName: "Smith"
};

console.log(getFullName(names));