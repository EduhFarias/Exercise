//
// Created by Eduardo on 10/09/2017.
//

#ifndef EXERCISE_GRAPH_H
#define EXERCISE_GRAPH_H
/*
    Graph.h
    TAD para representar um Grafo.
 */

typedef struct adj_list AdjList;
typedef struct graph Graph;

Graph* createGraph();

AdjList* createAdjList(int item);

void add_edge(Graph *graph, int vertex1, int vertex2);

void dfs(Graph *graph, int source);

void bfs(Graph *graph, int source);

void printGraph(Graph *graph);

#endif //EXERCISE_GRAPH_H
