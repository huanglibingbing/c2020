#include<stdio.h>
void main(){
	int $;
	scanf("%d",&$);
	if($>0&&$<100){
	printf("贫困打工人");
	}
	else if($>101&&$<1000){
	printf("一般打工人");
	}
	else if($>1001&&$<20000){
	printf("土豪打工人");
	}
	else{
	printf("输入有误，请重新输入");	
	}
}
