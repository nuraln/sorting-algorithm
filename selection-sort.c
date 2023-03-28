#include <stdio.h>

void selectionSort(int arr[], int n) {
   int i, j, min_idx, temp;
   for (i = 0; i < n-1; i++) {
      min_idx = i;
      for (j = i+1; j < n; j++) {
         if (arr[j] < arr[min_idx]) {
            min_idx = j;
         }
      }
      temp = arr[i];
      arr[i] = arr[min_idx];
      arr[min_idx] = temp;
   }
}

void printArray(int arr[], int size) {
   int i;
   for (i = 0; i < size; i++) {
      printf("%d ", arr[i]);
   }
   printf("\n");
}

int main() {
   int arr[] = {64, 34, 25, 12, 22, 11, 90};
   int n = sizeof(arr)/sizeof(arr[0]);
   printf("Unsorted array: ");
   printArray(arr, n);

   selectionSort(arr, n);

   printf("Sorted array: ");
   printArray(arr, n);
   return 0;
}
