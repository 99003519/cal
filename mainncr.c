#include<ncr.h>
 
int fact(int num);
 
int main()
{
    int n, r, ncr_var;
 
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("\nEnter the value of r:");
    scanf("%d", &r);
    ncr_var=ncr(n,r);
    printf("\nThe value of C(%d,%d) is: %d",n,r,ncr_var);
}
int fact(int num)
{
    if (num <= 1) 
        return 1; 
    return num*fact(num-1); 
}