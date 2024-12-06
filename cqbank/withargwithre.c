#include<stdio.h>
int add();
int main(){
     int a = 10 , b = 10 , sum;
     sum = add(a,b);
  printf("%d",sum);
}
int add(int x , int y ){
    return x + y ;
}