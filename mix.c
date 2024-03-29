#include<stdio.h>
#include<stdlib.h>
void bubble(int A[],int n);
void selection(int A[],int n);
void merge_sort(int A[],int i,int j);
void merge(int A[],int i1,int j1,int i2,int j2);
int count2=0,count3=0;

void bubble(int A[],int n)
{
	int i,j,temp;
	int count1=0;
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2-i;j++)
		{
			count1++;
			if(A[j]>A[j+1])
			{
				
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}

	}
	printf("\nBubble sort : %d comparisions\n",count1);

}
void selection(int A[],int n)
{
	int i,j,temp,min;
	for(i=0;i<=n-2;i++)
	{	min=i;
		for(j=i+1;j<=n-1;j++)
		{
			count2=count2+1;
			if(A[min]>A[j])
			{	
				min=j;
			}
		}
			{
				temp=A[min];
				A[min]=A[i];
				A[i]=temp;
			}
		

	}

}
void merge_sort(int A[],int i,int j)
{
	int mid;
	if(i<j)
	{
		mid=(i+j)/2;
		merge_sort(A,i,mid);
		merge_sort(A,mid+1,j);
		merge(A,i,mid,mid+1,j);
	}

}
void merge(int A[],int i1,int j1,int i2,int j2)
{
	int temp[100];
	int i,j,k;
	i=i1;
	j=i2;
	k=0;
	while(i<=j1 && j<=j2)
	{
		count3++;
		if(A[i]<A[j])
			{
			temp[k++]=A[i++];}
		else
			{
			temp[k++]=A[j++];}
	}
	while(i<=j1)
	{temp[k++]=A[i++];}
	while(j<=j2)
	{temp[k++]=A[j++];}
	for(i=i1,j=0;i<=j2;i++,j++)
	{A[i]=temp[j];}

}
void main()
{
	int n,A[200],i;
	printf("How many elements?");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{A[i]=rand()%100+1;}
	for(i=0;i<n;i++)
	{printf("%d\t",A[i]);}
	bubble(A,n);
	selection(A,n);
	printf("Selection sort : %d comparisions\n",count2);
	merge_sort(A,0,n-1);
	printf("Merge sort : %d comparisions\n",count3);

}
