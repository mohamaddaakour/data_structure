# create a class of Node
class Node:
    # a constructor to create an instance of each node
    def __init__(self, data: int):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def append(self, value: int) -> None:
        new_node: Node = Node(value)

        if self.head == None:
            self.head = new_node
            return

        current: Node = self.head

        while current.next is not None:
            current = current.next

        current.next = new_node
    
    def prepend(self, value: int) -> None:
        new_node: Node = Node(value)

        if self.head is None:
            self.head = new_node
            return

        new_node.next = self.head
        self.head = new_node

    def delete(self, value: int) -> None:
        current: Node = self.head

        if current.data == value:
            self.head = self.head.next

        while current.next is not None:
            next_node: Node = current.next

            if next_node.data == value:
                current.next = next_node.next
                next_node.next = None
                
            current = current.next

    def print(self) -> None:
        current: Node = self.head

        while current is not None:
            print(current.data)
            current = current.next
    
linked_list = LinkedList()

linked_list.prepend(4)
linked_list.append(1)
linked_list.append(2)

linked_list.delete(4)

linked_list.print()