struct Graph {
  // number of vertices
  unsigned int nV;
  // number of edges
  unsigned int nE;
  struct int **conections;
}

struct Vertex {
  unsigned int ID;
  unsigned int nConnections;
  char *name;
}

Set reachable (Graph g, Vertex v) {
  if (g == NULL || v == NULL) {
    return NULL;
  }

  Set seen = newSet(g->nV);
  Queue todo = newQueue();
  QueueJoin(todo, v);

  while (QueueSize(todo) > 0) {
    Vertex next = QueueLeave(todo);
    SetJoin(seen, next);
    for (int neighbour = 0; neighbour < g->nV; neighbour++) {
      if (g->connections[next.ID][neighbour] == 0) {
        continue;
      }
      if (!SetHasElem(seen, g->vertex[neighbour]) && !QueueHasElem(todo, g->vertex[neighbour])) {
        QueueJoin(todo, g->vertex[neighbour]);
      }
    }   
  }
  return seen;
}
