#include<stdio.h>
#include<string.h>
void main(){
    printf("欢迎使用吃货小程序，请问现在是什么节？\n");
	char e[13];
    scanf("%s",&e);
	char a[]="春节";
	char b[]="端午节";
	char c[]="中秋节";
	char d[]="元宵节";
	if(strcmp(e,a)==0){
	printf("给我安排饺子\n");
	}
	else if(strcmp(e,b)==0){
	printf("给我安排粽子\n");
	}
	else if(strcmp(e,c)==0){
	printf("给我安排月饼\n");
	}
	else {
	printf("给我安排元宵\n");
	}
}
