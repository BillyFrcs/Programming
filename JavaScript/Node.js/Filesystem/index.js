const fileSystem = require('fs');

const fileName = 'notes.txt';

const fileReadCallback = (data) => {
    if (!fileSystem.existsSync(fileName)) {
        console.log("Failed to read file!");

        return;
    }

    console.log(data);
}

//? Read with synchronous
const data = fileSystem.readFileSync('notes.txt', 'UTF-8');

fileReadCallback(data);