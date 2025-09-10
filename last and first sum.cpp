#include<stdio.h>
int main(){
	int lastdigit , firstdigit,n ,sum;
	scanf("%d",&n);//123
	lastdigit=n%10;
	firstdigit=n/100;
	sum=firstdigit+lastdigit ;
	printf("%d",sum);
	return 0;
	
}