let obj =
{
     key: 'value'
};

console.log(obj);

// Access value by key
console.log(obj.key);

// Access value by property name
console.log(obj['key']);

console.log();

let data =
{
     name: 'Billy',
     age: 16,
     profession: 'Developer',
     married: false
};

// Key
console.log(data);
console.log(data.name);
console.log(data.age);
console.log(data.profession);
console.log(data.married);

// Property
console.log(data['name']);
console.log(data['age']);
console.log(data['profession']);
console.log(data['married']);

// Concat the values
console.log(data.name + ' is a ' + data.age + ' year old ' + data.profession + '. He is ' + (data.married ? 'married' : 'not married') + ' yet.');

console.log();

let items =
{
     firstName: 'Sendy',
     lastName: 'Friscilla',
     information:
     {
          age: 10,
          profession: 'Student',
          hobby: ['Playing games', 'Reading books', 'Watching movies']
     }
}

console.log(`Name: ${items.firstName} ${items.lastName}`);
console.log(`Information: Age ${items.information.age}, Profession ${items.information.profession}, Hobby ${items.information.hobby}`);
console.log(`Hobby: ${items.information.hobby[0]}`);