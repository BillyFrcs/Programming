const routes = [
    {
        method: 'GET',
        path: '/',
        handler: (request, h) => {
            return 'Home page';
        }
    },
    {
        method: '*',
        path: '/',
        handler: (request, h) => {
            return 'Cannot access this page with that method';
        }
    },
    {
        method: 'GET',
        path: '/about',
        handler: (request, h) => {
            return 'About page';
        }
    },
    {
        method: '*',
        path: '/about',
        handler: (request, h) => {
            return 'Cannot access this page with that method';
        }
    },
    {
        method: 'GET',
        path: '/hello/{name?}',
        handler: (request, h) => {
            const { name = 'user' } = request.params;
            const { lang } = request.query;

            if (lang === 'id') {
                return `Hi, ${name}!`;
            }

            return `Hello, ${name}!`;
        }
    },
    {
        method: 'POST',
        path: '/login',
        handler: (request, h) => {
            const { username, password } = request.payload;

            return `Welcome ${username}`;
        }
    },
    {
        method: 'POST',
        path: '/user',
        handler: (request, h) => {
            return h.response('created').code(201);
        }
    },
    {
        method: '*',
        path: '/{any*}',
        handler: (request, h) => {
            return 'Page not found!';
        }
    },
];

module.exports = routes;