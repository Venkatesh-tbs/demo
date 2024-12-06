#include<stdio.h>
int main(){
    int a , b , e ;
    printf("entere any 2 n ;");
    scanf("%d %d",&a ,&b );
    e = a;
    a = b;
    b = e ;
    printf("swaped  n a =%d, b =%d\n",a , b);
}