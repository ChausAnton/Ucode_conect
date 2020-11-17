int mx_strcmp(const char *s1, const char *s2, int n);

int mx_strlen(const char *);

int mx_selection_sort(char **arr, int size) {
    int min_index = 0;
    int last_min = 0;
    int swap = 0;
    for (int i = 0; i < size-1; i++) { 
        min_index = i; 
        for (int j = i+1; j < size; j++) {
            if (mx_strlen(arr[j]) < mx_strlen(arr[min_index])) {
                min_index = j;
                last_min = 1;
            }
            else if(mx_strlen(arr[j]) == mx_strlen(arr[min_index])) {
                if(mx_strcmp(arr[j], arr[min_index], mx_strlen(arr[min_index])) < 0) {
                    min_index = j;
                    last_min = 1;
                }
            }
        }
        if (last_min == 1) {
            char *temp = arr[min_index]; 
            arr[min_index] = arr[i]; 
            arr[i] = temp;
            swap++;
            last_min = 0;
        }
    }
    return swap;
}
