const fileSystem = require('fs');

const fileReadCallback = (error, data) => {
    if (error) {
        console.log("Failed to read file!");

        return;
    }

    console.log(data);
}

fileSystem.readFile('todo.txt', 'UTF-8', fileReadCallback);

//? Read with synchronous
/*
const data = fileSystem.read('todo.txt', 'UTF-8');

console.log(data);
*/