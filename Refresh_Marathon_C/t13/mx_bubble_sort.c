int mx_strcmp(const char *s1, const char *s2, int n);

int mx_bubble_sort(char **arr, int size) {
    int count_op = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            int length = 0;
            while(arr[i][length] != '\0'){
                length++;
            }
            if(mx_strcmp(arr[j], arr[j + 1], length) > 0) {
                char *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                count_op++;
            }
        }
    }
    return count_op;
}
