//linear search in c 

#include <stdio.h>

int sort(int a[],int n){
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

int linearsearch(int arr[], int N, int x)
{
    for (int i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main(void) {
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
  int x = 10;

  printf("\nnumber to be found: %d ",x);

  int result = linearsearch(numberArray,n,x);
  if (result == -1)
    printf("\nNot found");
  else
    printf("\nElement is found at index %d", result);
}