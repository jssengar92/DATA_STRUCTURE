#include<stdio.h>
#include<stdlib.h>
int binary_search(int *,int,int);
int main()
{
	int n,i,key;
	int *arr;
	printf("Enter No. Of Elements In A Loop\n");
	scanf("%d",&n);
	arr=calloc(n,sizeof(int));
	printf("Elements are\n");
	for(i=0;i<n;i++)
	{	
		scanf("%d",arr+i);
	}
	printf("Enter The Element To Be searched\n");
	scanf("%d",&key);
	binary_search(arr,n,key);
return 0;
}

int binary_search(int *arr,int n,int key)
{
	int high,low,mid;
	high=n-1;
	low=0;
	while(low <= high)
	{
		mid=(high+low)/2;
		if(*(arr+mid)==key)
		{
			printf("Element Is:%dFound At:%d\n",key,mid);
			break;
		}
		else if(key >*(arr+mid))
		{	
			low=mid+1;
		}
		else if (key < *(arr+mid))
		{
			high=mid-1;
		}
	}
	if (low > high )
	{	
		printf("Element Not Found\n");
	}
}

