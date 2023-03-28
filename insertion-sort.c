#include <stdio.h>

void insertionSort(int arr[], int n) {
   int i, key, j;
   for (i = 1; i < n; i++) {
      key = arr[i];
      j = i - 1;

      /* Pindahkan elemen arr[0..i-1], yang lebih besar dari key, ke posisi di depannya */
      while (j >= 0 && arr[j] > key) {
         arr[j + 1] = arr[j];
         j = j - 1;
      }
      arr[j + 1] = key;
   }
}

void printArray(int arr[], int n) {
   int i;
   for (i = 0; i < n; i++)
      printf("%d ", arr[i]);
   printf("\n");
}

int main() {
   int arr[] = {12, 11, 13, 5, 6};
   int n = sizeof(arr) / sizeof(arr[0]);

   printf("Unsorted array: ");
   printArray(arr, n);

   insertionSort(arr, n);

   printf("Sorted array: ");
   printArray(arr, n);
   return 0;
}
