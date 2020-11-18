#include<stdio.h>
void main(){
	int a;
	scanf("%c",&a);
	if(a>=0&&a<=500){
	printf("赤贫\n");
	}
	else if(a>=501&&a<=1500){
	printf("普通打工人\n");
	}
	else if(a>=1501&&a<=3000){
	printf("普通清洁工\n");
	}
	else if(a>=3001&&a<=5000){
	printf("水电工工资\n");
	}
	else if(a>=5001&&a<=12000){
	printf("脑袋大脖子粗不是老板就是伙夫\n");
	}
	else if(a>=12001&&a<=50000){
	printf("程序员\n");
	}
	
}
