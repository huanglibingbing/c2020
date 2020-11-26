#include<stdio.h>
void main(){
	int a,b,c,d;
	printf("请输入三个数字\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b){
		d=b;c=a;a=d;
	}
	if(a<c){
		d=c;c=a;a=d;
	}
	if(b<c){
		d=c;c=b;b=d;
	}
	printf("从大到小顺序为:%d<%d<%d",a,b,c);

	
}
