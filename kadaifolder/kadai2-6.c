#include <stdio.h>

int main() {

    double a;      
    int x;         
    x = 17;         

    printf("%3d \n", x);  
    a = 3.14159;
    printf("%6.2f \n", a); 

    int b;
    a = 15; 
    b = 5;
    
    printf("a/b+5=%d \n", (int)a / b + 5);     
    printf("a/(b+5)=%d \n", (int)a / (b + 5));  

    return 0;
}