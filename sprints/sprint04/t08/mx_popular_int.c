int mx_popular_int(const int *arr, int size) {
    int temp;
    int count = 0;
    int count_prev = 0;
    int common_number;
    for (int i = 0; i < size; i++) {
        temp = arr[i];
        for (int j = 0; j < size; j++) {
            if (arr[j] == temp) {
                count++;
            }
        }
        if (count_prev < count) {;
                count_prev = count;
                common_number = arr[i];
        }
        count = 0;
    }
    return common_number;
}
