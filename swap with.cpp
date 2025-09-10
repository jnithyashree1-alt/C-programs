#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d",&a,&b); // 10 20
	printf("Before Swapping a -> %d , b -> %d \n",a,b);
	c=b; // 20
	b=a; // 10
	a=c; // 20
	printf("After Swapping a -> %d , b -> %d",a,b);
	return 0;
}