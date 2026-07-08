#include<stdio.h>
int main(){
	int n;
	printf("enter the rows: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		
		int a=1;
		for(int s=1;s<=i;s++){
			char ch=(char)(a+64);
			printf("%c",ch);
			a++;
			}
			printf("\n");
		}
		return 0;
	}
	