#include<stdio.h>
void sort(int a[],int k,int n)
{
	for(int i=0;i<=k-1;i++)
{
		for(int j=0;j<=n-2-i;j++){
			if (a[j+1]<a[j]){
				
		int temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
}
} 
	printf("%d\n",a[n-i-1]);
}
}
int main()
{

int n,arr[20];
printf("Enter number of elements: ");

scanf("%d",&n);
printf("Enter the the elements into the array: ");

for (int i=0;i<n;i++){

scanf("%d",&arr[i]);
}

int k;
printf("Enter the number of large numbers to be found: ");
scanf("%d",&k);
sort(arr,k,n);
return 0;
}
