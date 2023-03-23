const http = require('http');

const requestListener = (request, response) => {
    response.setHeader('Content-Type', 'text/html');

    response.statusCode = 200;

    const { method, url } = request;

    if (url === '/') {
        if (method === 'GET') {
            response.end('<h1>This is the home page</h1>');
        } else {
            response.end(`<h1>Cannot access page with ${method} request!</h1>`);
        }
    } else if (url === '/about') {
        if (method === 'GET') {
            response.end('<h1>This is the about page</h1>');
        } else if (method === 'POST') {
            let body = [];

            request.on('data', (chunk) => {
                body.push(chunk);
            });

            request.on('end', () => {
                body = Buffer.concat(body).toString();

                const { name } = JSON.parse(body);

                response.end(`<h1>Hello ${name}!, This the about page</h1>`);
            });
        } else {
            response.end(`<h1>Cannot access page with ${method} request!</h1>`);
        }
    } else {
        response.end('<h1>Page not found!</h1>');
    }

    /*
    if (method === 'GET') {
        response.end('<h1>Hello Billy!</h1>');
    }

    if (method === 'POST') {
        let body = [];

        request.on('data', (chunk) => {
            body.push(chunk);
        });

        request.on('end', () => {
            body = Buffer.concat(body).toString();

            const { name } = JSON.parse(body);
            
            response.end(`<h1>Hello ${name}!</h1>`);
        });
    }
    */
}

const server = http.createServer(requestListener);
const port = 1908;
const host = 'localhost';

server.listen(port, host, () => {
    console.log(`Server is running on http://${host}:${port}`);
});