#include<stdio.h>
void main(){
	char e;
	printf("欢迎使用:\n");
	scanf("%c",&e);
	switch(e){
	case 'a':printf("你在点击上健");break;
	case 's':printf("你在点击下健");break;
	case 'd':printf("你在点击左健");break;
	case 'w':printf("你在点击右健");break;

	default:printf("输入错误\n");
	}
}
