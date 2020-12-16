#include<stdio.h>
int a(int x){
    if(x<=0){
    return 0;
    }
   return x+a(x-1);

}

void main(){
    int c;
    scanf("%d",&c);
    printf("%d\n",a(c));
}

