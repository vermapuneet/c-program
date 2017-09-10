#include<stdio.h>
#define max 50

int mergesort(int arr[],int low,int mid,int height);
int partition(int arr[],int low,int high);

int partition(int arr[],int low,int high)
{
  int mid;
  if(low<high)
  { mid=(low + high)/2;
  partition(arr,low,mid);
  partition(arr,mid+1,high);
  mergesort(arr,low,mid,high);
  }
  return 0; 
}
int mergesort(int arr[],int low,int mid,int high)
{
 int i,m,k,l,temp[max];
 i=low;
 l=low;
 m=mid+1;
 while((l<=mid)&&(mid<=high))
 {
  if(arr[l]<=arr[m])
  {
  
   temp[i]=arr[l];
   l++;
  
 }
 else
 {
  temp[i]=arr[m];
  m++;
 }
 i++;
}
  if(l>mid)
 {
 for(k=m;k<=high;k++)
 {
  temp[i]=arr[k];
  i++;
 }
}
 else
  {
    for(k=1;k<=mid;k++)
 {
  temp[i]=arr[k];
  i++;
 }
  }
  for(k=low;k<=high;k++)
  {
    arr[k]=temp[k];
  }
   return 0;
 
  }

int main()
 {
  int j,m,merge[max];
   
      printf("enter the total number of element ");
      scanf("%d",&m);
      printf("enter the element which is to be sorted\n");
      for(j=0;j<m;j++)
      {   printf(" \n%d element is",j+1);
       scanf("%d",&merge[j]);
      
      }
    partition(merge,0,m-1);
    printf("after merge sorting the element are \n");
    for(j=0;j<m;j++)
    {
     printf("%d\t",merge[j]);
                             }
  return 0;
  
 }