#include<stdio.h>
int add();
int main(){
    int a = 10 , b = 10 , sum ;
    sum = a + b ;
    sum=add(a,b);
}
int add(int x , int y ){
      int sum = x + y ;
      printf("%d",sum);
}