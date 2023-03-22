const { EventEmitter } = require('events');

const myEventEmitter = new EventEmitter();

const makePizza = (name) => {
    console.log(`${name} pizza has been ready!`)
};

const makeBill = (price) => {
    console.log(`${price} bill has been ready!`)
};

/*
const makePizza = ({ name }) => {
    console.log(`${name} pizza has been ready!`)
};

const makeBill = ({ price }) => {
    console.log(`${price} bill has been ready!`)
};
*/

const onPizzaOrderedListener = ({ name, price }) => {
    makePizza(name);
    makeBill(price);
};

/*
myEventEmitter.on('pizza-order', makePizza);
myEventEmitter.on('pizza-order', makeBill);
*/

myEventEmitter.on('pizza-order', onPizzaOrderedListener);
myEventEmitter.emit('pizza-order', { name: 'Cheese', price: 55000 });