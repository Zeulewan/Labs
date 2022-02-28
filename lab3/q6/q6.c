#include <stdio.h>

int main()
{
	int n1;
	int n2;
	int n3;
	int mid;
	int hi;
	int lo;

	printf("Enter Number 1: ");
	scanf("%d", &n1);
	printf("Enter Number 2: ");
	scanf("%d", &n2);         
	printf("Enter Number 3: ");
	scanf("%d", &n3);
	
	if (n1>n2) {

		mid=n1;
		lo=n2;

	} else {

		mid=n2;
		lo=n1;
	}
	if (mid>n3) {
		hi=mid;
		if(lo>n3) {
			mid=lo;
			lo=n3;
		}else {
			mid=n3; 		
		}
	}else hi=n3;
	
	printf("Decending order:\n%d\n%d\n%d\n",hi,mid,lo);


	return 0;
}
