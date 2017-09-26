#include <stdio.h>
int BS(int Arr[],int LB,int UB,int key)
{
	int MP;
	
	if(LB>UB)
		return -1;
	MP=(LB+UB)/2;
	if(key<Arr[MP])
		{
			BS(Arr,LB,MP-1,key);
		}
		else if(key>Arr[MP])
		{
			BS(Arr,MP+1,UB,key);
		}
		else
			return MP;
}

int main()
{
	int Arr[]={1,6,7,93,105,223,465,783};
	int max=sizeof(Arr)/sizeof(int);
	int LB,UB,MP,key,c;
	printf("Enter the number: ");
	scanf("%d",&key);
	LB=0;
	UB=max-1;
	c=BS(Arr,LB,UB,key);
	if(c==-1)
		printf("The element %d is not found\n",key);
	else
		printf("Element %d is found in %d position\n", key,c+1);
	return 0;
	
}

