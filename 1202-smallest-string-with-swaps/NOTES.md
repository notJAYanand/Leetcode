Iterate over the pairs and create an adjacency list such that adj[source] contains all the adjacent vertices of vertex source.
Iterate over the indices from 0 to s.size() - 1. For each index vertex we will:
Perform DFS if vertex is not visited yet (visited[vertex] is false)
While performing DFS, store vertex in the list indices and the character s[vertex] in the list characters.
Sort the lists indices and characters.
Iterate over indices and characters, and place the i_{th}i
th
•
character at the i_{th}i
th
•
index in the string smallestString.
Return smallestString.
​