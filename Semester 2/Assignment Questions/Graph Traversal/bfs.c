//t Graph Traversal - Breadth first search
//* Refrence: https://learn.saylor.org/mod/page/view.php?id=19014
//* Refrence output: https://www.goeduhub.com/5856/c-program-for-implementation-of-bfs-in-graph

#include <stdio.h>
#include <conio.h>
int G[20][20], q[20], visited[20], n, front = 1, rear = 0;

void bfs(int v){
    int i;
    visited[v] = 1;
    for (i = 1; i <= n; i++)
        if (G[v][i] && !visited[i])
            q[++rear] = i;
    if (front <= rear)
        bfs(q[front++]);
}

int main(){
    system("cls");
    int v, i, j;
    printf("\nEnter the number of vertices: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        q[i] = 0;
        visited[i] = 0;
    }
    printf("\nEnter graph data in matrix form:\n");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf("%d", &G[i][j]);
    printf("\nEnter the starting vertex:");
    scanf("%d", &v);
    bfs(v);
    printf("\nThe nodes which are reachable are: \n");
    for (i = 1; i <= n; i++)
        if (visited[i])
            printf("%d ", i);
        else
            printf("\n %d is not reachable", i);

    return 0;
}