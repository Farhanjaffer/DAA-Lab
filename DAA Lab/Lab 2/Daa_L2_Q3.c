// Write a function gcd(k) which returns the GCD of kth & (k+1)th Fibonacci numbers for k>1. Use Euclid’s algorithm to calculate the GCD.
#include <stdio.h>

int fibgcd(int n)
{
    int a = 0, b = 1;
    int c = a + b;
    printf("Fibonacci Series: %d, %d \n", a, b);
int count=0;
    for (int i = 3; i <= n; ++i)
    {
        printf("%d,", c);
        a = b;
        b = c;
        c = a + b;
        count++;
    }
    int x=b;
    int y=c;
printf("\nkth element:%d\n",x);
printf("k+1th element:%d\n",y);
printf("gcd:%d\n",gcd(x,y));
printf("No of times loop ran:%d\n",count);
}
int gcd(x,y){
    if (x == 0)
        return y;
    return gcd(y % x, x);
}
int main()
{

    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibgcd(n);
    

    return 0;
}
