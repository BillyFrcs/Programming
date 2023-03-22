const { EventEmitter } = require('events');

const birthdayEventListener = (name) => {
    console.log(`Happy birthday ${name}!`);
}

const birthday = ({ name }) => {
    birthdayEventListener(name);
}

const myEmitter = new EventEmitter();

myEmitter.on('birthday', birthday);
myEmitter.emit('birthday', {name: 'Billy'});