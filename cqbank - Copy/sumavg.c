#include<stdio.h>
int main(){
    int a , b , c , d ;
    float ave ;
    printf("enter the 3 values :");
    scanf("%d %d  %d",&a , &b , &c);
    d = a + b + c ;
    ave = (float)d / 3;
    printf("sum = %d ave = %f\n",d , ave);
}


