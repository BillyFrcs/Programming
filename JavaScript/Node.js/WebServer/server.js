const http = require('http');

const requestListener = (request, response) => {
    response.setHeader('Content-Type', 'application/json');
    response.setHeader('X-Powered-By', 'NodeJS');

    const { method, url } = request;

    if (url === '/') {
        if (method === 'GET') {
            response.statusCode = 200;

            response.end(JSON.stringify({
                message: '<h1>This is the home page</h1>'
            }));
        } else {
            response.statusCode = 400;

            response.end(JSON.stringify({
                message: `<h1>Cannot access page with ${method} request!</h1>`
            }));
        }
    } else if (url === '/about') {
        if (method === 'GET') {
            response.statusCode = 200;

            response.end(JSON.stringify({
                message: '<h1>This is the about page</h1>'
            }));
        } else if (method === 'POST') {
            let body = [];

            request.on('data', (chunk) => {
                body.push(chunk);
            });

            request.on('end', () => {
                body = Buffer.concat(body).toString();

                const { name } = JSON.parse(body);

                response.statusCode = 200;

                response.end(JSON.stringify({
                    message: `<h1>Hello ${name}!, This the about page</h1>`
                }));
            });
        } else {
            response.statusCode = 400;

            response.end(JSON.stringify({
                message: `<h1>Cannot access page with ${method} request!</h1>`
            }));
        }
    } else {
        response.statusCode = 404;

        response.end(JSON.stringify({
            message: 'Page not found!'
        }));
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