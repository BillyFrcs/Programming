function g(str) {
    const i = 0;

    let new_str = "";

    while (i < new_str.length - 1) {
        new_str = new_str + str[i + 1];

        i++;
    }

    return new_str;
}

function f(str) {
    if (str.length == 0)
        return "";
    else if (str.length == 1)
        return str;
    else
        return f(g(str)) + str[0];
}

function h(n, str) {
    while (n != 1) {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;

        str = f(str);
    }

    return str;
}

function pow(x, y) {
    if (y == 0)
        return 1;
    else
        return x * pow(x, y - 1);
}

console.log(h(1, "fruits"));
console.log(h(2, "fruits"));
console.log(h(5, "fruits"));
console.log(h(pow(2, 1000000000000000), "fruits"));
console.log(h(pow(2, 9831050005000007), "fruits"));