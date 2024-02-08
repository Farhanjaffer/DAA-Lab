// Insertion sort

#include <stdio.h>
#include <time.h>

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], int size)
{

    for (int n = 1; n < size; n++)
    {
        int key = arr[n];
        int j = n - 1;

        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    FILE *myFile;
    myFile = fopen("random.txt", "r");

    // read file into array
    int num;
    printf("Enter the quantity of numbers(below 100000)\n");
    scanf("%d", &num);
    int numberArray[num];
    int i;
    for (i = 0; i < num; i++)
    {
        fscanf(myFile, "%d", &numberArray[i]);
    }
    int size = sizeof(numberArray) / sizeof(numberArray[0]);

    //average case(not sorted)
    clock_t start, end;
    start = clock();
    insertionSort(numberArray, size);
    end = clock();
    double time1 = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Average case:%f\n", time1);

    //best case(already sorted)
    start = clock();
    insertionSort(numberArray, size);
    end = clock();
    double time2 = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Best case:%f\n", time2);

    //worst case (sorted reverse)
    int revarr[size];
    for (int i = size; i >= 0; i--)
    {
        revarr[size - i] = numberArray[i];
    }
    start = clock();
    insertionSort(revarr, size);
    end = clock();
    double time3 = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Worst case:%f\n", time3);
}
// 10000 data
//  average case->0.005000
//  best case->0.000000
//  worst case->0.040000

// 20000 data
//  average case->0.008000
//  best case->0.000000
//  worst case->0.096000

// 30000 data
//  average case->0.684000
//  best case->0.000000
//  worst case->1.416000

// 40000 data
//  average case->1.205000
//  best case->0.000000
//  worst case->2.468000

// 50000 data
//  average case->1.921000
//  best case->0.000000
//  worst case->3.845000