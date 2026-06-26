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

    insertBeg(value: T): void {
        const newNode: ListNode<T> = new ListNode(value);

        if (!this.head) {
            this.head = newNode;
            return;
        }

        newNode.next = this.head;
        this.head = newNode;
    }
}

const linkedList = new LinkedList();

linkedList.append(2);
linkedList.append(5);
linkedList.append(6);
linkedList.insertBeg(1);
linkedList.print();

console.log(`Number of nodes is: ${linkedList.countNodes()}`);