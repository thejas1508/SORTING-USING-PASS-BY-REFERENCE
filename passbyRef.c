#include <stdio.h> 
void main()
{
int n,a[100],x;
void sortarray(int*,int);
printf("\nEnter the Number of Elements in an array : "); 
scanf("%d",&n);
printf("\nEnter the Array elements\n"); 
for(x=0;x<n;x++)
scanf("%d",&a[x]); 
sortarray(a,n);
printf("\nAfter Sorting... \n");
for(x=0;x<n;x++) 
printf("%d\n",a[x]);
}
void sortarray(int* arr,int num)
{
int x,y,temp; 
for(x=0;x<num;x++) 
for(y=x+1;y<num;y++) 
if(arr[x] > arr[y])
{
temp=arr[x]; 
arr[x] = arr[y];
arr[y] = temp;
}
}
