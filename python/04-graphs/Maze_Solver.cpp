// Maze Solver by Python
from collections import deque

# Function to print the maze
def print_maze(maze):
    for row in maze:
        print(" ".join(str(cell) for cell in row))
    print()

# Depth-First Search (DFS) algorithm
def dfs(maze, start, end):
    stack = [start]
    visited = set()
    path = []

    while stack:
        current = stack.pop()
        if current in visited:
            continue
        visited.add(current)
        path.append(current)

        if current == end:
            return path

        x, y = current
        # Explore neighbors (up, down, left, right)
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            neighbor = (x + dx, y + dy)
            if (0 <= neighbor[0] < len(maze) and 
                0 <= neighbor[1] < len(maze[0]) and 
                maze[neighbor[0]][neighbor[1]] == 0 and 
                neighbor not in visited):
                stack.append(neighbor)

    return None  # No path found

# Breadth-First Search (BFS) algorithm
def bfs(maze, start, end):
    queue = deque([start])
    visited = set()
    parent_map = {start: None}

    while queue:
        current = queue.popleft()
        if current in visited:
            continue
        visited.add(current)

        if current == end:
            # Reconstruct path
            path = []
            while current is not None:
                path.append(current)
                current = parent_map[current]
            return path[::-1]  # Return reversed path

        x, y = current
        # Explore neighbors (up, down, left, right)
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            neighbor = (x + dx, y + dy)
            if (0 <= neighbor[0] < len(maze) and 
                0 <= neighbor[1] < len(maze[0]) and 
                maze[neighbor[0]][neighbor[1]] == 0 and 
                neighbor not in visited):
                queue.append(neighbor)
                parent_map[neighbor] = current

    return None  # No path found

# Example usage
if __name__ == "__main__":
    maze = [
        [0, 1, 0, 0, 0],
        [0, 1, 0, 1, 0],
        [0, 0, 0, 1, 0],
        [1, 1, 0, 0, 0],
        [0, 1, 1, 1, 0]
    ]

    start = (0, 0)  # Starting point
    end = (4, 4)    # Ending point

    print("Maze:")
    print_maze(maze)

    # Solve using DFS
    print("Solving using DFS:")
    dfs_path = dfs(maze, start, end)
    if dfs_path:
        print("Path found:", dfs_path)
    else:
        print("No path found.")

    # Solve using BFS
    print("Solving using BFS:")
    bfs_path = bfs(maze, start, end)
    if bfs_path:
        print("Path found:", bfs_path)
    else:
        print("No path found.")
