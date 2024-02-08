#include <stdio.h>

int main()
{

    int large;
    int a[4];
    printf("Enter array elements\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }
    
    large=a[0];
  for (int i = 0; i < 4; i++)
  {
    if (a[i] > large)
    {
      large=a[i];
    }
    
  }
  
    
    printf("largest element is:: %d\n",large);
    return 0;
}