#include <stdio.h>
#include <stdlib.h>
#define MAX_VERTICLES 1001

typedef struct GraphType {
    int n,m,v;
    int adj_list[MAX_VERTICLES][MAX_VERTICLES];
}GraphType;

int visitedDFS[MAX_VERTICLES];
int visitedBFS[MAX_VERTICLES];

void init(GraphType* g){
    scanf("%d %d %d", &(g->n), &(g->m), &(g->v));
    int start, end;
    for(int i=0; i<g->m; i++){
        scanf("%d %d", &start, &end);
        g->adj_list[start][end]=1;
        g->adj_list[end][start]=1;
    }

    for(int i=1; i<=g->n; i++){
        visitedDFS[i]=0;
        visitedBFS[i]=0;
    }
}

void dfs(GraphType* g, int v){
    visitedDFS[v]=1;
    printf("%d ",v);
    for(int i=1; i<=g->n; i++){
        if(!visitedDFS[i] && g->adj_list[v][i]){
            dfs(g, i);
        }
    }
}

void bfs(GraphType* g, int v){
    
}

int main() {

}