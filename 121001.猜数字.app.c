#include<stdio.h>
#include<string.h>
void main(){
    char c[]="嘿";
    char d[20];
    int a=13;
    int b;       
    while(1){
        scanf("%s",&d);
    if(strcmp(c,d)==0){
        printf("开始\n");
        scanf("%d",&b);
    if(b==13){
        printf("正确\n");
    }
    
    else if(b<13){
        printf("太小了\n");
    }
    else {
        printf("太大了\n");
    }
	}
	else {
		printf("错误\n");
	
	}
}

}
