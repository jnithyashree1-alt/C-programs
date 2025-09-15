#include<stdio.h>
int main(){
	int n,lastdigit;
	scanf("%d",&n);
	lastdigit = n%10;
	if(lastdigit%2==0)
	printf("even");
	else
	printf("odd");
	return 0;
	
}
