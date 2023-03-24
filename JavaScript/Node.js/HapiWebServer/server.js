const Hapi = require('@hapi/hapi');
const routes = require('./routes');

const init = async () => {
    const server = Hapi.server({
        port: 1908,
        host: 'localhost'
    });

    server.route(routes);

    await server.start();

    console.log(`Server is running at ${server.info.uri}`);
}

init();