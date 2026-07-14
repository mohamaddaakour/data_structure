class Node:
    def __init__(self, value: int):
        self.value = value
        self.left = None
        self.right = None


def find_max(node: Node | None) -> int:
    if node is None:
        return 0

    left_max = find_max(node.left)
    right_max = find_max(node.right)

    return max(node.value, left_max, right_max)

root = Node(10)
root.left = Node(5)
root.right = Node(20)

# root.left.left = Node(3)
# root.left.right = Node(8)
# root.right.left = Node(15)
# root.right.right = Node(30)

print(find_max(root))