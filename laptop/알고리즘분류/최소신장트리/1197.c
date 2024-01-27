// MST : Diikstra

#include <stdio.h>
#include <stdlib.h>
#define MAX_VERTICES 10001
#define INF 1000000

int parent[MAX_VERTICES];

typedef struct Edge{
    int start, end, weight;
}Edge;

typedef struct GraphType{
    int n; // 간선의 개수
    Edge edges[100001]; // 간선 배열
}GraphType;

void graph_init(GraphType* g){
    g->n=0;
    for(int i=0; i<100001; i++){
        g->edges[i].start=0;
        g->edges[i].end=0;
        g->edges[i].weight=INF;
    }
}

void insert_edge(GraphType* g, int u, int v, int w){
    g->edges[g->n].start=u;
    g->edges[g->n].end=v;
    g->edges[g->n].weight=w;
    (g->n)++;
}

void set_init(int n){
    for(int i=1; i<=n; i++){
        parent[i]=-1;
    }
}

int set_find(int curr){
    if(parent[curr]==-1) return curr;
    while(parent[curr]!=-1){
        curr=parent[curr];
    }
    return curr;
}

void set_union(int a, int b){
    int root1=set_find(a);
    int root2=set_find(b);
    if(root1!=root2){
        parent[root1]=root2;
    }
}

int compare(const void* a, const void* b){
    Edge* x=(Edge*)a;
    Edge* y=(Edge*)b;
    return (x->weight - y->weight);
}

int kruskal(GraphType* g){
    int edge_accepted=0;
    int uset,vset,i=0;
    Edge e;
    int rWeight=0;

    set_init(g->n);
    qsort(g->edges,g->n,sizeof(Edge),compare);

    while(edge_accepted < g->n-1){
        e=g->edges[i];
        uset=set_find(e.start);
        vset=set_find(e.end);
        if(uset!=vset){
            edge_accepted++;
            rWeight+=e.weight;
            set_union(uset,vset);
        }
        i++;
        if(i>=g->n) break;
    }

    return rWeight;
}

int main(){
    GraphType* g;
    int n, n_e;
    int a,b,c;

    g=(GraphType*)malloc(sizeof(GraphType));
    graph_init(g);

    scanf("%d %d",&n, &n_e);
    for(int i=0; i<n_e; i++){
        scanf("%d %d %d",&a,&b,&c);
        insert_edge(g,a,b,c);
    }

    int w=kruskal(g);
    printf("%d\n",w);
}