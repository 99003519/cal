#include<npr.h> 

int fact(int n) 
{ 
    if (n <= 1) 
        return 1; 
    return n*fact(n-1); 
} 

int main() 
{ 
    int n, r,npr; 
    printf("Enter n: "); 
    scanf("%d", &n); 
  
    printf("Enter r: "); 
    scanf("%d", &r); 
    npr=fact(n)/fact(n-r);
    printf("%dP%d is %d", n, r, npr); 
  
    return 0; 
}