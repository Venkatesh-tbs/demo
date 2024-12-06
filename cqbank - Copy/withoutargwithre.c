#include<stdio.h>
int add();
int main(){
    int  sum ;
    sum =add();
    printf("%d",sum);

}
int add(int x , int y ){
    x = 10 , y = 10 ;
    return x + y ;
}