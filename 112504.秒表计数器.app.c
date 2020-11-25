#include<stdio.h>
#include<windows.h>
void main(){
	int a=1;
	printf("秒钟计时器\n");
	do{
	printf("%d\n",a);
	a++;
	Sleep(1000);
	}
	while(a<=10000000000);
	{	
		printf("现在是第a秒");
	}
	system("pause");
}
