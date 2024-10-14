# Python to implement linked matrix 
# from a 2D matrix recursively 
class Node:
    def __init__(self, data):
        self.data = data
        self.right = None
        self.down = None

def constructUtil(mat, i, j):
  
    # Base case: if we are out of bounds, return None
    if i >= len(mat) or j >= len(mat[0]):
        return None

    # Create a new Node with the current matrix value
    curr = Node(mat[i][j])

    # Recursively construct the right and down pointers
    curr.right = constructUtil(mat, i, j + 1)
    curr.down = constructUtil(mat, i + 1, j)

    # Return the constructed Node
    return curr

def constructLinkedMatrix(mat):
  
    # Call the utility function starting 
    # from the top-left corner of the matrix
    return constructUtil(mat, 0, 0)

def printList(head):
    currRow = head
    while currRow:
        currCol = currRow
        while currCol:
            print(currCol.data, end=" ")
            currCol = currCol.right
        print()
        currRow = currRow.down

if __name__ == "__main__":
  
    mat = [
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9]
    ]

    head = constructLinkedMatrix(mat)
    printList(head)
