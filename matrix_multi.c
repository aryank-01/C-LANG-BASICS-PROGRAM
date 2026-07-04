                              //MUULTIPICATION OF TWO MATRIX //
#include<stdio.h>      
int main(){
	int arr[3][2]={{2,4},{3,5},{7,1}};
	int brr[2][4]={{4,1,5,5},{1,5,6,7}};
	int rrr[3][4];
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){	
		rrr[i][j]=0;
		for(int k=0;k<2;k++){    //it will run 2 times 
			rrr[i][j] += arr[i][k]*brr[k][j];  //(a[i][0],a[i][1],arr[i][2]...)*(b[0][j],b[1][j],b[2][j]....)
		}
	}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("%d ",rrr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}