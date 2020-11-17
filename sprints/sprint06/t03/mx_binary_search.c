int mx_strcmp(const char *s1, const char *s2, int n);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int rigth = size - 1 ;
    int left = 0;

    while(left <= rigth) {
        int mid = (left + rigth) / 2;
        int lenght = 0;
        int lenght2 = 0;
        while(arr[mid][lenght] != '\0') {
            lenght++;
        }
        while(s[lenght2] != '\0') {
            lenght2++;
        }
        if(lenght2 > lenght){
            lenght = lenght2;
        }
        *count = *count + 1;
        if (mx_strcmp(arr[mid], s, lenght) == 0) {
            return mid;
        }
        else if (mx_strcmp(arr[mid], s, lenght) > 0) { 
            rigth = mid - 1;
        }
        else if(mx_strcmp(arr[mid], s, lenght) < 0){
            left = mid + 1;
        }
    }
    *count = 0;
    return -1;
}
