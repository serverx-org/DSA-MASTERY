# Iterative Python program to reverse a linked list
class Node:
    def __init__(self, new_data):
        self.data = new_data
        self.next = None

# Given the head of a list, reverse the list and return the
# head of reversed list
def reverse_list(head):

    # Initialize three pointers: curr, prev and next
    curr = head
    prev = None

    # Traverse all the nodes of Linked List
    while curr is not None:

        # Store next
        next_node = curr.next

        # Reverse current node's next pointer
        curr.next = prev

        # Move pointers one position ahead
        prev = curr
        curr = next_node

    # Return the head of reversed linked list
    return prev

def print_list(node):
    while node is not None:
        print(f" {node.data}", end="")
        node = node.next
    print()

if __name__ == "__main__":

    # Create a hard-coded linked list:
    # 1 -> 2 -> 3 -> 4 -> 5
    head = Node(1)
    head.next = Node(2)
    head.next.next = Node(3)
    head.next.next.next = Node(4)
    head.next.next.next.next = Node(5)

    print("Given Linked list:", end="")
    print_list(head)

    head = reverse_list(head)

    print("Reversed Linked List:", end="")
    print_list(head)
