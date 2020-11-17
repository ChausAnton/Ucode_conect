void mx_sort_arr_int(int *arr, int size) {
    int temp;
    int check = 0;
    while (1 == 1) {
        for (int i = 0; i < size - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                check = 1;
            }
        }
        if (check == 0)
            return;
        check = 0;
    }
}
