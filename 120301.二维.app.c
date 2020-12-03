#include<stdio.h>
void main(){
    int a,b;
    int arr[]={
        12,13,14,15,16};
    int arr2d[2][4]={
        {2,3,4,5},
        {5,6,7,8}
    };
    for(a=0;a<2;a++){
    for(b=0;b<4;b++){
    printf("%d ",arr2d[a][b]);}
    printf("\n");
}
}
