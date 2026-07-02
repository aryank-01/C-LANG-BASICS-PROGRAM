#include<stdio.h>
int main(){
	int n;
	printf("enter the terms till which you wanna print: ");
	scanf("%d",&n);
	int t1=0;
	int t2=1;
	int sum=0;
	printf("%d %d ",t1,t2);
	for(int i=3;i<=n;i++){
		sum=t1+t2;
		t1=t2;
		t2=sum;
		printf("%d ",sum);
	}
	
}