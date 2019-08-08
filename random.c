#include<stdio.h>
#include<stdlib.h>
int max_random(int a[], int n)
{
  int i;
  int max=a[0];
  for(i=0;i<n;i++)
  {
     if(a[i]>max)
       max=a[i];
  }
  return max;
}
void main()
{ 
  int a[300],n,i,max;
  printf("Enter the number of elements");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    a[i]=rand() % 100+1;
  }
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
  max=max_random(a,n);
  printf("Max is %d",max);
}
