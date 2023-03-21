let condition = false;

// NOT
if (!condition) {
     console.log('Yooo')
}
else {
     console.log('Nooo')
}

console.log('\n')

let firstItem = true;
let secondItem = false;

// OR
if (firstItem || secondItem) {
     console.log('One or both of the items is truthy!');
} else {
     console.log('Neither of the items is truthy.');
}

// AND
if (firstItem && !secondItem) {
     console.log("Called first item")
}
else {
     console.log("Called second item")
}

console.log('\n');

if (!firstItem && !secondItem) {
     console.log('Both of the items are falsey!');
} else {
     console.log('One or both of these items is truthy.');
}

console.log('\n');

if ('abc' && '0') {
     console.log('A');
} else {
     console.log('B');
}

if (!!'abc' && !0) {
     console.log('A');
} else {
     console.log('B');
}

if (!('abc' && 0)) {
     console.log('A');
} else {
     console.log('B');
}

if (!('abc' && !0)) {
     console.log('A');
} else {
     console.log('B');
}