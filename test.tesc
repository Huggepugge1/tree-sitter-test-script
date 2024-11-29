const thing: int = 1;

fn fib(n: int) {
    if n <= 1 {
	n;
    } else {
	fib(n - 1) + fib(n - 2);
    }
}

test1("./test") {
    let x: bool = true;

    let y: int = -1;

    if x {
	println("Hello, World!");
    } else {
	println("Goodbye, World!");
    }

    if x {
	print("Hello, World!");
    } else {
	print("Goodbye, World!");
    }
}
