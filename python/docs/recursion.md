- Recursion is a technique used to solve computer problems by creating a function that calls itself until your program achieves the desired result.

- The recursive calls are saved in a stack in the memory, so they are called in reverse order (LIFO).

```python
# here when we get to the base case of
# self.preorder(node.left) and begin with
# self.preorder(node.right) we don't check
# self.preorder(node.left) again
def preorder(self, node: Node | None) -> None:
    if node is None:
        return

    print(node.value, end=" ")
    self.preorder(node.left)
    self.preorder(node.right)
```