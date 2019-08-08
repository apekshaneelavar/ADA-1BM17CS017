#include<stdio.h>
int search(int a[], int k, int n)
{
   int l,h,mid;
   l=0;
   h=n-1;
   while(l<=h)
   {
     mid=(l+h)/2;
     if(k==a[mid])
       return 1;
     else
    {
      if(k<a[mid])
        h=mid-1;
      else
        l=mid+1;
    
    }
   }
 return -1;
}
void main()
{
   int n,k,a[30],s,i;
   printf("Enter the number of elements");
   scanf("%d",&n);
   printf("Enter the elements");
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   printf("Enter the element to be searched");
   scanf("%d",&k);
   s=search(a,k,n);
   printf("%d",s);
}
   
