#include<stdio.h>
void main(){
	int a,b,c,d;
	printf("input three number please;");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){d=b;c=a;a=d;
	}
	if(a>c){d=c;c=a;a=d;
	}
	if(b>c){d=c;c=b;b=d;}
	printf("%d%d%d",a,b,c);

	
}
