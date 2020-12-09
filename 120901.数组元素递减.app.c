#include<stdio.h>
void main(){
    int c=91;
    int a,b;
    int arr1d[9][10]={
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };
    for(a=0;a<9;a++){
        for(b=0;b<10;b++){
        c--;
        arr1d[a][b]=c;
        printf("%d ",arr1d[a][b]);
        }
        printf("\n");
    }
}
