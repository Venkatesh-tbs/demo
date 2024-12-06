 #include <stdio.h> 
int main() 
{ 
    float miles, km; 
    printf("Enter miles: "); 
    scanf("%f", &miles); 
    km = miles * 1.60934; 
    printf("Kilometers: %.2f\n", km); 
    return 0; 
    
}