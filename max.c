#include<stdio.h>
int num_max(int a[], int n)
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
    int a[50],i,n,max;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
     { 
        scanf("%d",&a[i]);
     }
 max=num_max(a,n);
printf("Max is %d",max);
}

