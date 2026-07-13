class Node:
    def __init__(self, value: int):
        self.value = value
        self.left = None
        self.right = None


def tree_sum(node: Node | None) -> int:
    if node is None:
        return 0

    left_sum = tree_sum(node.left)
    right_sum = tree_sum(node.right)

    return node.value + left_sum + right_sum

root = Node(10)
root.left = Node(5)
root.right = Node(20)
root.left.left = Node(3)
root.left.right = Node(8)
root.right.left = Node(15)
root.right.right = Node(30)

print(tree_sum(root))