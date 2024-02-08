//binary search in c recursive method

#include <stdio.h>

int sort(int a[],int n)
{
    int temp;
     for (int i = 0; i < n; ++i) 
        {
 
            for (int j = i + 1; j < n; ++j)
            {
 
                if (a[i] > a[j]) 
                {
 
                    temp =  a[i];
                    a[i] = a[j];
                    a[j] = temp;
 
                }
 
            }
 
        }
}

int binarySearch(int array[], int x, int low, int high) 
{
  if (high >= low) {
    int mid = low + (high - low) / 2;

    
    if (array[mid] == x)
      return mid;

   
    if (array[mid] > x)
      return binarySearch(array, x, low, mid - 1);

    
      return binarySearch(array, x, mid + 1, high);
  }

  return -1;
}

int main(void) 
{
  FILE *myFile;
    myFile = fopen("random2.txt", "r");

    //read file into array
    int numberArray[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        fscanf(myFile, "%d", &numberArray[i]);
    }

    printf("\nArray before sorting:");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ",numberArray[i]);
    }

sort(numberArray,5);

printf("\nArray after sorting:");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ",numberArray[i]);
    }
    
  int n = sizeof(numberArray) / sizeof(numberArray[0]);
  int x = 6;

  printf("\nnumber to be found: %d ",x);

  int result = binarySearch(numberArray, x, 0, n - 1);
  if (result == -1)
    printf("\nNot found");
  else
    printf("\nElement is found at index %d", result);
}