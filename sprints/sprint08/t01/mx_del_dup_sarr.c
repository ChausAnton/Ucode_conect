#include "duplicate.h"

t_intarr *mx_del_dup_sarr(t_intarr *src) {
    if (src->arr == NULL) {
        return NULL;
    }

    t_intarr temp;
    temp.size = src->size;
    temp.arr = (int *) malloc(temp.size * sizeof(int));
    if(temp.arr == NULL) return NULL;

    int k = 0;
    for (int i = 0; i < src->size; i++) {
        int dup = -1;
        for(int j = 0; j < i; j++) {
            if(src->arr[i] == src->arr[j]) {
                dup = 1;
            }
        }
        if(dup == 1) continue;
        temp.arr[k] = src->arr[i];
        k++;
    }

    t_intarr *res = (t_intarr *) malloc(sizeof(t_intarr));
    res->size = k;
    res->arr = mx_copy_int_arr(temp.arr, k);
    free(temp.arr);
    temp.arr = NULL;
    return res;
}
