// quicksort search in c

#include <stdio.h>
#include <time.h>

void swap(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int array[], int low, int high)
{

  int pivot = array[high];

  int i = (low - 1);

  for (int j = low; j < high; j++)
  {
    if (array[j] <= pivot)
    {

      i++;

      swap(&array[i], &array[j]);
    }
  }

  swap(&array[i + 1], &array[high]);

  return (i + 1);
}

int quickSort(int array[], int low, int high)
{
  if (low < high)
  {

    int pi = partition(array, low, high);

    quickSort(array, low, pi - 1);

    quickSort(array, pi + 1, high);
  }
}

int main(void)
{
  for (int i = 0; i < 5; i++)
  {

    clock_t start, end;

    //making file
    FILE *myFile;
    myFile = fopen("final.txt", "r");
    int num;
    printf("Enter the quantity of numbers(below 100000)\n");
    scanf("%d", &num);

    // read file into array
    int numberArray[num];
    int i;

    for (i = 0; i < num; i++)
    {
      fscanf(myFile, "%d", &numberArray[i]);
    }

    //average case
    start = clock();
    int n = sizeof(numberArray) / sizeof(numberArray[0]);
    quickSort(numberArray, 0, n - 1);
    end = clock();
    double time1 = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("average case:%f\n", time1);

    //best case
    int arr[num];
    start = clock();
    int n1 = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n1 - 1);
    end = clock();
    double time2 = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("best case:%f\n", time2);

    //worst case
    int revarr[num];
    for (int i = 0; i < num; i++)
    {
        revarr[n-i]=arr[i];
    }
    start = clock();
    int n2 = sizeof(revarr) / sizeof(revarr[0]);
    quickSort(revarr, 0, n2 - 1);
    end = clock();
    double time3 = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("worst case:%f\n", time3);

  }

  return 0;
}

// 10000
// best case:0.008000
// average case:0.193000
// worst case:0.200000

// 20000
// best case:0.033000
// average case:0.108000
// worst case:0.166000

// 30000
// best case:0.073000
// average case:0.218000
// worst case:0.435000

// 40000
// best case:0.113000
// average case:0.290000
// worst case:1.097000

// 50000
// best case:0.182000
// average case:0.404000
// worst case:0.771000