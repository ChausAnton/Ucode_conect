#include <stdio.h>
#include <stdlib.h>

int *mx_copy_int_arr(const int *, int);

int *mx_del_dup_arr(int *src, int src_size, int *dst_size) {
    if (src == NULL) return NULL;

    int arr[src_size];
    int k = 0;
    for (int i = 0; i < src_size; i++) {
        int dup = -1;
        for(int j = 0; j < i; j++) {
            if(src[i] == src[j]) {
                dup = 1;
            }
        }
        if(dup == 1) continue;
        arr[k] = src[i];
        k++;
    }

    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }
    int *res = mx_copy_int_arr(temp, k);
    *dst_size = k;
    
    return res;
}
