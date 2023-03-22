const message = (name) => {
    console.log(`Hello ${name}`);
}

message("Billy");

const cpuInformation = process.memoryUsage();

console.log(cpuInformation);

const firstName = process.argv[2];
const lastName = process.argv[3];

console.log(`\nHello ${firstName} ${lastName}!`);

// Get the current date
const moment = require('moment');

const date = moment().format('MMM Do YY');

console.log(`\nCurrent date: ${date}`);