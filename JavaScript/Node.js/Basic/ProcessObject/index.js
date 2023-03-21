//? How to run: NODE_ENV=development node ./ProcessObject/index.js <Name>
const initialMemoryUsage = process.memoryUsage().heapUsed;
const myName = process.argv[2];
const environment = process.env.NODE_ENV;

for (let i = 0; i <=     10000; i++) {
    
}

const currentMemoryUsage = process.memoryUsage().heapUsed;

console.log(`Hi, ${myName}`);
console.log(`Mode environment: ${environment}`)
console.log(`Memory used from ${initialMemoryUsage} get high to ${currentMemoryUsage}`);    