#include "graph.h"


int main(){
    adrNode G;
    G = new node;
    addNode_1301213292(G,newNode_1301213292('A'));
    addNode_1301213292(G,newNode_1301213292('B'));
    addNode_1301213292(G,newNode_1301213292('C'));
    addNode_1301213292(G,newNode_1301213292('D'));

    addEdge_1301213292(G,'A','C');
    addEdge_1301213292(G,'A','D');
    addEdge_1301213292(G,'A','B');

    addEdge_1301213292(G,'B','A');
    addEdge_1301213292(G,'B','D');

    addEdge_1301213292(G,'C','A');

    addEdge_1301213292(G,'D','B');
    addEdge_1301213292(G,'D','A');

    printGraph_1301213292(G);
}
