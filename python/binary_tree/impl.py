from __future__ import annotations


class Node:
    def __init__(self, value: int):
        self.value = value
        self.left: Node | None = None
        self.right: Node | None = None


class BinaryTree:
    def __init__(self):
        self.root: Node | None = None

    def insert(self, value: int) -> None:
        """Insert a value using level-order insertion."""
        new_node = Node(value)

        if self.root is None:
            self.root = new_node
            return

        queue = [self.root]

        while queue:
            current = queue.pop(0)

            if current.left is None:
                current.left = new_node
                return

            queue.append(current.left)

            if current.right is None:
                current.right = new_node
                return

            queue.append(current.right)

    def preorder(self, node: Node | None) -> None:
        """Root -> Left -> Right."""
        if node is None:
            return

        print(node.value, end=" ")
        self.preorder(node.left)
        self.preorder(node.right)

    def inorder(self, node: Node | None) -> None:
        """Left -> Root -> Right."""
        if node is None:
            return

        self.inorder(node.left)
        print(node.value, end=" ")
        self.inorder(node.right)

    def postorder(self, node: Node | None) -> None:
        """Left -> Right -> Root."""
        if node is None:
            return

        self.postorder(node.left)
        self.postorder(node.right)
        print(node.value, end=" ")

    def level_order(self) -> None:
        """Visit nodes level by level."""
        if self.root is None:
            return

        queue = [self.root]

        while queue:
            current = queue.pop(0)
            print(current.value, end=" ")

            if current.left:
                queue.append(current.left)

            if current.right:
                queue.append(current.right)

tree = BinaryTree()

tree.insert(1)
tree.insert(2)
tree.insert(3)
tree.insert(4)
tree.insert(5)

tree.preorder(tree.root)
print()

tree.inorder(tree.root)
print()

tree.postorder(tree.root)
print()

tree.level_order()