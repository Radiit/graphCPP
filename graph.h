#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#include <iostream>

using namespace std;

#define next(P) (P)->next
#define info(P) (P)->info
#define child(p) (p)->child

typedef char infotype;
typedef struct node *adrNode;
typedef struct edge *adrEdge;

struct node{
    infotype info;
    adrNode next;
    adrEdge child;
};

struct edge{
    infotype info;
    adrEdge next;
};

adrEdge newEdge_1301213292(char x);
adrNode newNode_1301213292(char x);
void addNode_1301213292(adrNode &G, adrNode p);
adrNode findNode_1301213292(adrNode G, char x);
void addEdge_1301213292(adrNode &G, char x, char y);
bool isConnected_1301213292(adrNode G, char x, char y);
void printGraph_1301213292(adrNode G);


#endif // GRAPH_H_INCLUDED
