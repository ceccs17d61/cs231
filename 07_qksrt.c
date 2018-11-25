#include<stdio.h>
void main() 
{
int i,j,k,temp,beg,end,mid,item,n,f=0;
printf("enter array limit\n");
scanf("%d",&n);
int arr[n];
printf("enter array elements\n");
for(k=0;k<n;k++)
{
scanf("%d",&arr[k]);
}
for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
  {
    if(arr[i]>arr[j])
    {
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    }
  }
} 
for(i=0;i<n;i++)
{
printf("\n%d",arr[i]);
}
printf("\nEnter the number to find:\n");
scanf("%d",&item);
beg=0;
end=n;
mid=(int)(end+beg)/2;
while(item!=arr[mid] && beg<=end)
{
  if(item>arr[mid])
  {
   beg=mid+1;
  }
  else
  {
   end=mid-1;
  }
mid=(int)(end+beg)/2;
}
if(beg<=end)
{
printf("\nPosition is %d \n",mid+1);
}
else
printf("\nPosition not found");
}
