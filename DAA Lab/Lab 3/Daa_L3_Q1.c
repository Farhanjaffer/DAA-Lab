#include <stdio.h>
#include <stdlib.h> 
int recMin(int a[], int n) {
    if (n == 1)
        return a[0];
    else
        return (a[n - 1] < recMin(a, n - 1)) ? a[n - 1] : recMin(a, n - 1);
}
int d = 0; // depth defined here.
int recMinWithD(int a[], int n) { // recursive with min depth defined here.
    d++; 
    if (n == 1) {
        d--;
        return a[0];
    } else {
        int minValue = recMinWithD(a, n - 1); 
        d--;
        return (a[n - 1] < minValue) ? a[n - 1] : minValue;
    }
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
        rand()+1;        
    }
    printf("Generated array:\n ");
    for (int i = 1; i < n; i++) {
        printf("%d ", a[i]);
    }
    int minVal = recMin(a, n);
    printf("\n\nMin value using recursiveMin: %d\n", minVal);
    int minValWithD = recMinWithD(a, n);
    printf("\nMin value using recMinWithD: %d\n", minValWithD);
    printf("Recursion depth: %d\n", d);

return 0;
}