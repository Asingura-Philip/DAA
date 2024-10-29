def dfs_stack(graph,start):
    visited = set()
    stack =[start]

    while stack:
        node=stack.pop()
        if node not in visited:
            print(node,end="")
            visited.add(node)

            for neigbor in reversed(graph[node]):
                if neigbor not in visited:
                    stack.append(neigbor)

graph={
    "A":["S","D"],
    "B":["D","S"],
    "S":["A","B","C"],
    "D":["A","B","C"],
    "C":["S","D"],
    

}
dfs_stack(graph,"S")