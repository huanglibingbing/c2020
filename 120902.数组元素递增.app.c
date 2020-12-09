#include<stdio.h>
void main(){
	int c=0;
	int a,b;
	int arr[9][20]={
		{0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0}
	};
	for(a=0;a<9;a++){
		for(b=0;b<20;b++){
			c++;
			arr[a][b]=c;
		printf("%d ",arr[a][b]);
		}
		printf("\n");
	}
}
