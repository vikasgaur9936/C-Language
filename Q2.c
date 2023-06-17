#include<stdio.h>
int main(){
	int n, rev;
	// taking input
	printf("Enter three digit no.");  
	scanf("%d",&n);
	//calculations
	rev = (n%10)*100+((n/10)%10)*10+n/100; 
	//output
	printf("Reversed:%d\n",rev);
	
	return 0;

}
