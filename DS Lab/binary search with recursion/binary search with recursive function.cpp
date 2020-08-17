#include<stdio.h>
int ReBinarysearch(int[],int,int,int);
int main()
{
	int n,x,i,position;
	int a[] = {4,7,9,11,15,16,21,31,67,98};
	scanf("%d",&x);
	position = ReBinarysearch(a,0,10,x);
	if (position == -1)
	{
		printf("search is unsucessful");
	}
	else
	{
		printf("search is sucessful at position %d\n",position);
	}
	return 0;
}
int ReBinarysearch(int a[],int first,int last,int x)
{
	int mid;
	if (first<=last)
	{
		mid = (first+last)/2;
		if (a[mid]==x)
		return mid;
		else if (x>a[mid])
		return ReBinarysearch(a,mid+1,last,x);
		else
		return ReBinarysearch(a,first,mid-1,x);
	}
	return -1;
}
		
			
		
		
		
	

		
	
	




