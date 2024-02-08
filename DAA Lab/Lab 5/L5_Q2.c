#include <time.h>
#include <stdio.h>


void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void merge(int arr[], int p, int q, int r) {

    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];

  
    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    while (i < n1 && j < n2) {
        if (L[i] <= M[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = M[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r) {
  if (l < r) {

    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

   
    merge(arr, l, m, r);
  }
}

int main() {
    //file code
    FILE *myFile;
    myFile = fopen("Lab5.txt", "r");
    int num;
    printf("Enter the quantity of numbers(below 100000)\n");
    scanf("%d", &num);
    //read file into array
    int x[num];
    int i;
    for (i = 0; i < num; i++)
    {
        fscanf(myFile, "%d", &x[i]);
    }

    //Sorting code & Timing
    int size = sizeof(x) / sizeof(x[0]);
    //Average case
    clock_t start, end;
    start = clock();
    mergeSort(x, 0, size - 1);
    end = clock();
    double time1 = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Average Case:%f\n", time1);
    
    //Best case
    int sortarr[size];
    for (int i = 0; i < size; i++)
    {
        sortarr[i]=x[i];
    }
    start = clock();
    mergeSort(sortarr, 0, size - 1);
    end = clock();
    double time2 = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Best Case:%f\n", time2);

    //Worst case
    int revarr[size];
    for (int i = 0; i < size; i++)
    {
        revarr[size-i]=sortarr[i];
    }
    start = clock();
    mergeSort(revarr, 0, size - 1);
    end = clock();
    double time3 = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Worst Case:%f\n", time3);
    
}

//for 20000 data
//Avg case: 0.010000
//Best case: 0.002000
//Worst Case:0.003000

//for 30000 data
//avg case: 0.007000
//best case: 0.002000
//worst case: 0.008000

//for 40000 data
//avg case: 0.005000
//best case: 0.003000
//worst case: 0.010000

//for 50000 data
//avg case: 0.002000
//best case: 0.011000
//worst case: 0.007000