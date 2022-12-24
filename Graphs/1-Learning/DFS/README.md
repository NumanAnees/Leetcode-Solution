## Time Complexity:

For an undirected graph, O(N) + O(2E), For a directed graph, O(N) + O(E), Because for every node we are calling the recursive function once, the time taken is O(N) and 2E is for total degrees as we traverse for all adjacent nodes.

## Space Complexity:

O(3N) ~ O(N), Space for dfs stack space, visited array and an adjacency list.
