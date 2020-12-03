#include<stdio.h>
#include<windows.h>
void main(){
	while(1){
	int a=5;
	int c;
	printf("友情提示：只能输入0-10\n");
	scanf("%d",&c);
	if(c==5){
	printf("答案正确，点赞!\n");}
	else if(c<5){
	printf("答案太小了!\n");
	}
	else{
	printf("答案太大了!\n");
	}
}
}
