#include "graph.h"

adrEdge newEdge_1301213292(char x){
    adrEdge p = new edge;
    info(p) = x;
    next(p) = NULL;
    return p;
}

adrNode newNode_1301213292(char x){
    adrNode p = new node;
    info(p) = x;
    child(p) = NULL;
    next(p) = NULL;
    return p;
}

void addNode_1301213292(adrNode &G, adrNode p){
    if(next(G) == NULL){
        next(G) = p;
    }else{
        adrNode q = G;
        while(next(q) != NULL){
            q = next(q);
        }
        next(q) = p;
    }
}

adrNode findNode_1301213292(adrNode G, char x){
    if(next(G) == NULL){
        return NULL;
    }else{
        G = next(G);
        while(G != NULL){
            if(info(G) == x){
                return G;
            }
            G = next(G);
        }
        return G;
    }
}

void addEdge_1301213292(adrNode &G, char x, char y){
    if(!isConnected_1301213292(G, x, y)){
        adrNode p = findNode_1301213292(G, x);
        if(p != NULL){
            if(child(p) == NULL){
                child(p) = newEdge_1301213292(y);
            } else {
                adrEdge q = child(p);
                while(next(q) != NULL){
                    q = next(q);
                }
                next(q) = newEdge_1301213292(y);
            }
        }
    }
}

bool isConnected_1301213292(adrNode G, char x, char y){
    adrNode p = findNode_1301213292(G, x);
    if(p != NULL){
        adrEdge q = child(p);
        while(q != NULL){
            if(info(q) == y){
                return true;
            }
            q = next(q);
        }
    }
    return false;
}


void printGraph_1301213292(adrNode G){
    adrNode p = next(G);
    while(p != NULL){
        cout << "node " << info(p) << ":";
        adrEdge q = child(p);
        while(q != NULL){
            cout << " - " << info(q);
            q = next(q);
        }
        p = next(p);
        cout << endl;
        }
}



