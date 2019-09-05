#include<bits/stdc++.h>
using namespace std;
int visited[20],adj[20][20];
void DFS(int v,int n)
{
	visited[v]=1;
	cout<<v<<endl;
	for(int i=0;i<n;i++)
	{
		if(adj[v][i]==1 && visited[i]==0)
		{
			DFS(i,n);
		}
	}
}
int main()
{
	int i,j,n;
	cout<<"Enter the number of nodes: ";
	cin>>n;
	cout<<"Enter the values into the matrix: "<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>adj[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		visited[i]=0;
	}
	for(i=0;i<n;i++)
	{
		if(visited[i]==0)
		{
			DFS(i,n);
		}
	}
	return 0;
}