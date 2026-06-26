class TreeNode<T> {
    value: T;
    left: TreeNode<T> | null = null;
    right: TreeNode<T> | null = null;

    constructor(value: T) {
        this.value = value;
    }
}

class BinarySearchTree<T> {
    private root: TreeNode<T> | null = null;

    insert(value: T): void {
        const newNode = new TreeNode(value);

        if (this.root === null) {
            this.root = newNode;
            return;
        }

        let current = this.root;

        while (true) {
            if (value < current.value) {
                if (current.left === null) {
                    current.left = newNode;
                    return;
                }
                current = current.left;
            } else {
                if (current.right === null) {
                    current.right = newNode;
                    return;
                }
                current = current.right;
            }
        }
    }

    search(value: T): boolean {
        let current = this.root;

        while (current !== null) {
            if (value === current.value) return true;

            if (value < current.value) {
                current = current.left;
            } else {
                current = current.right;
            }
        }

        return false;
    }

    inorder(node: TreeNode<T> | null = this.root): void {
        if (node === null) return;

        this.inorder(node.left);
        console.log(node.value);
        this.inorder(node.right);
    }

    preorder(node: TreeNode<T> | null = this.root): void {
        if (node === null) return;

        console.log(node.value);
        this.preorder(node.left);
        this.preorder(node.right);
    }

    postorder(node: TreeNode<T> | null = this.root): void {
        if (node === null) return;

        this.postorder(node.left);
        this.postorder(node.right);
        console.log(node.value);
    }

    bfs(): void {
        if (this.root === null) return;

        const queue: TreeNode<T>[] = [];

        queue.push(this.root);

        while (queue.length > 0) {
            const current = queue.shift()!;

            console.log(current.value);

            if (current.left !== null) {
                queue.push(current.left);
            }

            if (current.right !== null) {
                queue.push(current.right);
            }
        }
    }

    findMin(): T | null {
        if (!this.root) return null;

        let current = this.root;

        while (current.left !== null) {
            current = current.left;
        }

        return current.value;
    }

    findMax(): T | null {
        if (!this.root) return null;

        let current = this.root;

        while (current.right !== null) {
            current = current.right;
        }

        return current.value;
    }
}

const bst = new BinarySearchTree<number>();

bst.insert(50);
bst.insert(30);
bst.insert(70);
bst.insert(20);
bst.insert(40);
bst.insert(60);
bst.insert(80);

console.log("Search 40:", bst.search(40));
console.log("Search 100:", bst.search(100));

console.log("\nInorder (sorted):");
bst.inorder();

console.log("\nPreorder:");
bst.preorder();

console.log("\nPostorder:");
bst.postorder();

console.log("\nMin:", bst.findMin());
console.log("Max:", bst.findMax());