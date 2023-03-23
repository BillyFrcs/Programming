const http = require('http');

const requestListener = (request, response) => {
    response.setHeader('Content-Type', 'text/HTML');

    response.statusCode = 200;

    response.end('<h1>Hello World!</h1>');
}

const server = http.createServer(requestListener);
const port = 1908;
const host = 'localhost';

server.listen(port, host, () => {
    console.log(`Server is running on http://${host}:${port}`);
});