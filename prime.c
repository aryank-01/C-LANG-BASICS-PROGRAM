#include<stdio.h>
int main(){
	int n;
	printf("enter the value :");
	scanf("%d",&n);
	int a=0;
	for(int i=2;i<=n-1;i++){
		if(n%i==0){
			printf("composite number ");
			a=1;
			break;			
	}
	if(n==1){
		printf(" neither prime nor composite");
	}
	else if(a==0){
		printf(" prime number");
	}
	return 0;
}
}