void mx_arr_rotate(int *arr, int size, int shift) {
    if (shift < 0) {
        int temp = arr[size - 1];
        int temp2 = arr[size - 2];
        shift = shift * -1;
        for(int i = 0; i < shift; i++) {
            for(int j = size - 1; j >= 0; j--) {
                if (j % 2 == 0) {
                    temp = arr[j];
                    arr[j] = temp2;
                }
                else if (j % 2 != 0) {
                    temp2 = arr[j];
                    arr[j] = temp;
                }
                if(j == size - 1) {
                    arr[j] = arr[0];
                }
            }
        }
        return;
    }

    int temp = arr[0];
    int temp2 = arr[1];
    
    for(int i = 0; i < shift; i++) {
        for(int j = 0; j < size; j++) {
            if (j % 2 == 0) {
                temp = arr[j];
                arr[j] = temp2;
            }
            else if (j % 2 != 0) {
                temp2 = arr[j];
                arr[j] = temp;
            }
            if(j == 0) {
                arr[j] = arr[size - 1];
            }
        }
    }
}
