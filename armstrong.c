#include<stdio.h>
int main(){
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int a=n,b=a;
	int sum=0;
	int count =1;
	for(int i=1;i<=b;i++){
		count++;
		b=b/10;
	}
	printf("the total number of digits are: %d\n",count);
	for(int i=1;i<=count;i++){
		int product=1;
		for(int j=1;j<=count;j++){
			product=product*(n%10);
		}
		n=n/10;
		sum=sum+product;	
	}
	printf("the sum is :%d\n",sum);
	if(sum==a){
			printf("armstrong number");
		}
		else{
			printf("not a armstrong number");
		}
	return 0;
}