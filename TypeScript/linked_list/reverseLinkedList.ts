class ListNode<T> {
    value: T;
    next: ListNode<T> | null;

    constructor(value: T) {
        this.value = value;
        this.next = null;
    }
}

class LinkedList<T> {
    head: ListNode<T> | null;

    constructor() {
        this.head = null;
    }

    append(value: T): void {
        const newNode: ListNode<T> = new ListNode<T>(value);

        if (!this.head) {
            this.head = newNode;
            return;
        }

        let current: ListNode<T> = this.head;

        while (current.next) {
            current = current.next;
        }

        current.next = newNode;
    }

    print(): void {
        let current: ListNode<T> | null = this.head;

        while (current) {
            console.log(current.value);
            current = current.next;
        }
    }

    countNodes(): number {
        let current: ListNode<T> | null = this.head;
        let count: number = 0;

        while (current) {
            count++;
            current = current.next;
        }
        return count;
    }

    deleteFirstNode(): void {
        if (!this.head) {
            return;
        }

        if (this.countNodes()) {
            this.head = null;
        }

        if (this.head) {
            this.head = this.head.next;
        }
    }

    reverse(): void {
        let current: ListNode<T> | null = this.head;

        if (!current || !current.next)
            return;

        let next: ListNode<T> | null = null;
        let previous: ListNode<T> | null = null;

        while (current) {
            next = current.next;
            current.next = previous;
            previous = current;
            current = next;
        }

        this.head = previous;
    }
}

const linkedList = new LinkedList();

linkedList.append(2);
linkedList.append(5);
linkedList.append(6);
linkedList.reverse();
linkedList.print();


console.log(`Number of nodes is: ${linkedList.countNodes()}`);