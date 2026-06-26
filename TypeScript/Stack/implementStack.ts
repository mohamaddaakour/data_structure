class Stack<T> {
    private items: T[];

    constructor() {
        this.items = [];
    }

    // add element to the top
    push(element: T): void {
        this.items.push(element);
    }

    // remove top element
    pop(): T | undefined {
        if (this.isEmpty()) {
            console.log("Stack is empty");
            return undefined;
        }

        return this.items.pop();
    }

    // view top element
    peek(): T | undefined {
        if (this.isEmpty()) {
            console.log("Stack is empty");
            return undefined;
        }

        return this.items[this.items.length - 1];
    }

    // check if stack is empty
    isEmpty(): boolean {
        return this.items.length === 0;
    }

    // get stack size
    size(): number {
        return this.items.length;
    }

    // print stack
    print(): void {
        console.log(this.items);
    }

    // clear the stack
    clear(): void {
        this.items = [];
    }
}

// we create a stack of numbers
const stack = new Stack<number>();

console.log("Is Empty:", stack.isEmpty());

stack.push(10);
stack.push(20);
stack.push(30);
stack.push(40);

console.log("Stack:");
stack.print();

console.log("Top Element:", stack.peek());

console.log("Removed:", stack.pop());

console.log("After Pop:");
stack.print();

console.log("Size:", stack.size());