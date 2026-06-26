class Queue<T> {
    private items: T[];

    constructor() {
        this.items = [];
    }

    // add element to the end of queue
    enqueue(element: T): void {
        this.items.push(element);
    }

    // remove element from the front of the queue
    // (remove first element)
    dequeue(): T | undefined {
        if (this.isEmpty()) {
            console.log("Queue is empty");
            return undefined;
        }

        // shift() is a method like push but the difference
        // will remove first element not the last one
        return this.items.shift();
    }

    // view first element
    front(): T | undefined {
        if (this.isEmpty()) {
            console.log("Queue is empty");
            return undefined;
        }

        return this.items[0];
    }

    // check if the queue is empty
    isEmpty(): boolean {
        return this.items.length === 0;
    }

    // get queue size
    size(): number {
        return this.items.length;
    }

    // print queue
    print(): void {
        console.log(this.items);
    }

    // clear queue
    clear(): void {
        this.items = [];
    }
}

// we create a queue of strings
const names = new Queue<string>();

names.enqueue("Mohamad");
names.enqueue("Ali");
names.enqueue("John");

console.log("Names Queue:");
names.print();

console.log("Front Name:", names.front());

console.log("Removed Name:", names.dequeue());

names.print();