#include<stdio.h>
#include<windows.h>
void main(){
	int a,b;
	int arr2d[20][10]={
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},	
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0}
};
	for(a=0;a<20;a++){
		for(b=0;b<10;b++){
			arr2d[a][b]=999;
		printf("%d ",arr2d[a][b]);
		}
	printf("\n");
	}
	Sleep(0000);
	for(a=0;a<20;a++){
		for(b=0;b<10;b++){
			arr2d[a][b]=0;
	printf("%d ",arr2d[a][b]);
		}
			printf("\n");
	}

		Sleep(5000);
	for(a=0;a<20;a++){
		for(b=0;b<10;b++){
		arr2d[a][b]=999;
		printf("%d ",arr2d[a][b]);
		}
	printf("\n");
	}
		}
	
