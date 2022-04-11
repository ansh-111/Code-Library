// Floyd-Warshall Algorithm in C

#include <stdio.h>

// defining the number of vertices

#define INF 999
int nV;
void printMatrix(int matrix[][nV]);
// Implementing floyd warshall algorithm
void floydWarshall(int graph[][nV]) {
  int matrix[nV][nV], i, j, k;

  for (i = 0; i < nV; i++)
    for (j = 0; j < nV; j++)
      matrix[i][j] = graph[i][j];

  // Adding vertices individually
  for (k = 0; k < nV; k++) {
    for (i = 0; i < nV; i++) {
      for (j = 0; j < nV; j++) {
        if (matrix[i][k] + matrix[k][j] < matrix[i][j])
          matrix[i][j] = matrix[i][k] + matrix[k][j];
      }
    }
  }
  printMatrix(matrix);
}

void printMatrix(int matrix[][nV]) {
  for (int i = 0; i < nV; i++) {
    for (int j = 0; j < nV; j++) {
      if (matrix[i][j] == INF)
        printf("%4s", "INF");
      else
        printf("%4d", matrix[i][j]);
    }
    printf("\n");
  }
}

int main() {
    scanf("%d",&nV);
 int graph[nV][nV];
 for(int i=0;i<nV;i++)
 {
    for(int j=0;j<nV;j++)
    {
        scanf("%d",&graph[i][j]);
        if(graph[i][j]==0&&i!=j)
            graph[i][j]=INF;
    }
 }
  floydWarshall(graph);
}
