#include<stdio.h>
int LinearSearch(int [],int,int);
int main()
{
	int i,position,Key;
	int a[10] = {11,7,9,16,21,4,15,98,67,31};
	scanf("%d", &Key);
	position = LinearSearch(a,10,Key);
	if(position == -1){
		printf("saerch is unsucessful");
	}
	else{
		printf("search is sucessful at position %d",position);
	}
	return 0;
}
int LinearSearch(int a[],int n,int Key)
{
	int i;
    for(i=0;i<n;i++)
	{
		if (a[i]==Key)
		{
			return i;
			
		}
	} 
	return -1;
}
	
	
		
	
	
