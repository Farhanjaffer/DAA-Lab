#include <stdio.h>
#include <stdlib.h>
int op = 0;
int isUnique(int a[], int n, int num) {
    for (int i = 0; i < n; i++) {
        op++;
        if (a[i] == num) {
            return 0;
        }
    }
    return 1;
}
int* unique(int a[], int n, int* uniqueCount) {
    int* result = (int*)malloc(n * sizeof(int));
    *uniqueCount = 0;
    for (int i = 0; i < n; i++) {
        if (isUnique(result, *uniqueCount, a[i])) {
            result[*uniqueCount] = a[i];
            (*uniqueCount)++;
        }
    }
    return result;
}
int main() {
    int a[50];
    int n;
    int max;
    printf("Enter no of elements: "); 
    scanf("%d", &n); 
    printf("Enter max value: ");
    scanf("%d", &max);
    for (int i = 1; i < n; i++) {
        a[i] = rand() % max;        
    }
    printf("Generated array:\n ");
    for (int i = 1; i < n; i++) {
        printf("%d ", a[i]);
    }
    int uniqueCount;
    int* uniqueArray = unique(a, n, &uniqueCount);
    printf("\nDistinct integers: ");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", uniqueArray[i]);
    }
    printf("\nNumber of basic operations: %d\n", op);
    free(uniqueArray);
 return 0;
}