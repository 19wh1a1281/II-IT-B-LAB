#include<stdio.h>
int ReLinearsearch(int [],int,int);
int main()
{
	int i,position,Key;
	int a[10]= {11,7,9,16,21,4,15,98,67,31};
	scanf("%d",&Key);
	position = ReLinearsearch(a,10,Key);
	if (position == -1){
		printf("search is unsucessful");
	}
	else{
		printf("search is sucessful at position %d",position + 1);
	}
	return 0;
}
int ReLinearsearch(int a[],int n,int Key)
{
	if (n>0){
		if(a[n-1] == Key){
			return n-1;
		}
		else{
			return ReLinearsearch(a,n-1,Key);
		}
	}
	return -1;
}
