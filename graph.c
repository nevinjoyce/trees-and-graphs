/* Graph Adjacency Matrix */
#include <stdio.h>
#include <stdlib.h>
#define N 5
void init(int arr[][N])
{
	int i,j;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			arr[i][j]=0;
}
void addEdge(int arr[][N],int s, int d)
{
	arr[s][d]=1;
}
void printGraph(int arr[][N])
{
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}
void main()
{
	int graph[N][N];
	init(graph);
	addEdge(graph,0,1);
	addEdge(graph,0,2);
	addEdge(graph,1,3);
	addEdge(graph,3,2);
	printGraph(graph);
}
