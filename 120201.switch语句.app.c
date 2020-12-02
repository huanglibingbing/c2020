#include<stdio.h>
void main(){
	int a;
	printf("中国大学排名:\n");
	scanf("%d",&a);
	switch(a){
	case 1:printf("北京大学");break;
	case 2:printf("清华大学");break;
	case 3:printf("复旦大学");break;
	case 4:printf("浙江大学");break;
	case 5:printf("南京大学");break;
	case 6:printf("上海交通大学");break;
	case 7:printf("华中科技大学");break;
	case 8:printf("中国科学技术大学");break;
	case 9:printf("中国人民大学");break;
	case 10:printf("武汉大学");break;
	case 11:printf("南开大学");break;
	case 12:printf("山东大学");break;
	case 13:printf("中山大学");break;
	case 14:printf("西安交通大学");break;
	case 15:printf("哈尔滨工业大学");break;
	case 16:printf("东南大学");break;
	case 17:printf("四川大学");break;
	case 18:printf("吉林大学");break;
	case 19:printf("同济大学");break;
	case 20:printf("北京航空航天大学");break;
	default:printf("输入错误，请输入1-20\n");
	}
}
