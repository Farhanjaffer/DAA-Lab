// Aim of the experiment: Write a function generatePrimes(n) that returns an array of prime
// numbers less than or equal to n.

#include <stdio.h>
#include <stdlib.h>

int generatePrime(n)
{
    int arr[n];
    int prime[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 10;
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                break;
            }
            else
            {
                prime[i]=arr[i];
                count++;
            }
            
        }
        
    }
    if (count !=0)
    {
        for (int i = 0; i < n; i++)
        {
           printf("prime number: %d\n",prime[i]);
        }  
    }
    else
    {
        printf("no prime numbers found");
    }
    
    
}

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);

    generatePrime(n);
    
    return 0;
}