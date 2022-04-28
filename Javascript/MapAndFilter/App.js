var users = [
     { name: 'Billy', isProgrammer: true },
     { name: 'Sendy', isDeveloper: false }
];

console.log(users.map(user => user.name));
console.log(users.filter(user => user.isProgrammer).map(user => user.name)); // Display data by using filter

console.log("Map: " + users.map(user => user.name));
console.log("Filter: " + users.filter(user => user.isProgrammer).map(user => user.name)); // Display data by using filter