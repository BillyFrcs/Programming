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

// Readable stream
const readableStream = fileSystem.createReadStream('./article.txt', {
    highWaterMark: 10
});

readableStream.on('readable', () => {
    try {
        process.stdout.write(`${readableStream.read()}`);
    } catch (error) {
        throw ("Cannot read article!");
    }
});

readableStream.on('end', () => {
    console.log("Done reading");
});