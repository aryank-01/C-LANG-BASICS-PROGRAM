#include<stdio.h>
int main(){
	int a=4,b=7;
	printf("a & b: %d\n",a & b); // 0 1 0 0 (4)
	                            //  0 1 1 1 (7)
	                    //result  : 0 1 0 0 (4)
	
	printf("a | b: %d\n",a | b); // 0 1 0 0 (4)
	                            //  0 1 1 1 (7)
	                    //result  : 0 1 1 1 (7)
	
	
	printf("a ^ b: %d\n",a ^ b); // 0 1 0 0 (4)
	                            //  0 1 1 1 (7)
	                    //result  : 0 0 1 1 (3)
	
	
	printf("a >>3: %d\n",a >>2); //a=4/2/2
	
	printf("a <<3: %d\n",a <<3); //a=4*2*2*2 
	
	printf("~a: %d\n",~a);  //a=-(a+1)
	return 0;
	
}