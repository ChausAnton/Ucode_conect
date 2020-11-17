#include <stdbool.h>
#include <stdlib.h>

void mx_sort(int *arr, int size, bool (*f)(int, int)) {
    if(arr == NULL) return;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if(!f(arr[i], arr[j])) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
