function foo(x, a, b, i, j) {
    let k = j;
    let ct = 0;

    while (k > i - 1) {
        if (x[k] <= b && !x[k] <= a) {
            ct++;
        }

        k--;
    }

    return ct;
}

const x = [11, 10, 10, 5, 10, 15, 20, 10, 7, 11];

console.log(foo(x, 8, 18, 3, 6));
console.log(foo(x, 10, 20, 0, 9));
console.log(foo(x, 8, 18, 6, 3));
console.log(foo(x, 20, 10, 0, 9));
console.log(foo(x, 6, 7, 8, 8));