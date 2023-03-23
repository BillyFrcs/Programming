const fileSystem = require('fs');
const { resolve } = require('path');

const readableStream = fileSystem.createReadStream(resolve(__dirname, 'input.txt'), {
    highWaterMark: 15
});

const writeableStream = fileSystem.createWriteStream(resolve(__dirname, 'output.txt'));

readableStream.on('readable', () => {
    try {
        writeableStream.write(`${readableStream.read()}\n`);
    } catch (error) {
        throw (error.message);
    }
});

readableStream.on('end', () => {
    writeableStream.end();
});