/**
 * @return {Function}
 */
var createHelloWorld = function() {
    return function(...args) {
        // console.log("Hello World");
        const s="Hello World";
        return s;
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */