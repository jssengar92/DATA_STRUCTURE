#include<stdio.h>
#include<stdlib.h>
int insertion_sort(int *,int);
int main()
{
	int i,n;
	int *arr;
	printf("Enter No. Of Elements\n");
	scanf("%d",&n);
	arr=calloc(n,sizeof(int));
	printf("Elemente Are:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	insertion_sort(arr,n);
	printf("Sorted Elements Are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
return 0;
}
int insertion_sort(int *arr,int n)
{
	int i,j,k,temp,flag=0;
	for(i=0;i<n;i++)
	{
		for(j=i-1;(j>=0)&&(*(arr+j)>*(arr+j+1));j--)
		{
			temp=*(arr+j);
			*(arr+j)=*(arr+j+1);
			*(arr+j+1)=temp;
			flag=1;
		}
		printf("Pass[%d]",i);
		for(k=0;k<n;k++)
		{
			printf("%d ",*(arr+k));
		}
		printf("\n");
	}	
}
