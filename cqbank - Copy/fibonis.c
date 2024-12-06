
 #include<stdio.h>
int main(){
    int n , c,  a = 0 , b = 1 ;
    printf("enter the n value ");
    scanf("%d",&n);
    printf(" fibonicss series %d %d ", a , b);
    for (int i = 3; i <= n; i++)
    {
         c = a + b ; 
          printf("%d",c);
         a = b;
         b = c ;
        
         
}
printf("\n");
    }  