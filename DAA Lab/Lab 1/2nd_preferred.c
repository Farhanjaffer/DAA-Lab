#include <stdio.h>


int main()
{
//preference selection
    int k;
    printf("Preference number:");
    scanf("%d", &k);

    int large, small;

//Array Creation
    int n;
    printf("Enter the size of array::\n");
    scanf("%d",&n);
    int randArray[n];
    printf("Enter array elements::\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&randArray[i]);
    }
    
//Largest 
int l2;
large = randArray[0];
l2=randArray[0];
    for (int i = 0; i < n; i++)
    {
        
        if (randArray[i] > large)
        {
            l2=large;
            large=randArray[i];
        }
        
    }
    printf("Largest number: %d\n",large);
    printf("Second largest number: %d\n",l2);

//Smallest
int s2;
small = randArray[0];
    for (int i = 0; i < n; i++)
    {
        
        if (randArray[i]<small)
        {
            s2=small;
            small=randArray[i];
        }
        
        
    }
    printf("Smallest number: %d\n",small);
    printf("Second smallest number: %d\n",s2);

    return 0;
}