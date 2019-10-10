#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
	return(a>b?a:b);
}
int knapsack(int W,int wt[],int val[],int n)
{
	int V[n+1][W+1],i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<W;j++)
			{ 
				V[i][j]=0; 
			}
	}
	for(i=0;i<=n;i++)
		V[i][0]=0;
	for(j=0;j<=W;j++)
		V[0][j]=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=W;j++)
		{
			if(j-wt[i-1]>=0)
				V[i][j]=max(V[i-1][j],val[i-1]+V[i-1][j-wt[i-1]]);
			else
				V[i][j]=V[i-1][j];
		}
	}
	cout<<endl;
	return V[n][W];
}
int main()
{
	int val[20],wt[20],n,W;
	cout<<"Enter the number of items: ";
	cin>>n;
	cout<<"Enter the weight matrix: "<<endl;
	for(int i=0;i<n;i++)
		cin>>wt[i];
	cout<<"Enter the value matrix: "<<endl;
	for(int i=0;i<n;i++)
		cin>>val[i];
	cout<<"Enter the capacity of the sack: ";
		cin>>W;
	cout<<"Maximum value the sack can hold is: "<<knapsack(W,wt,val,n)<<endl;
	return 0;
}