const Hapi = require('@hapi/hapi');
const routes = require('./routes');

// Testing the server: http://notesapp-v1.dicodingacademy.com

const init = async () => {
  const server = Hapi.server({
    port: 5000,
    host: 'localhost',
    routes: {
      cors: {
        origin: ['*']
      },
    },
  });

  server.route(routes);

  await server.start();

  console.log(`Server running at: ${server.info.uri}`);
};

init();
