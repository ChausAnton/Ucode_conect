
int mx_atoi(const char *str);

void mx_printint(int n);

void mx_printchar(char c);

int main(int argc, char *argv[]) {
    for (int j = 1; j < argc; j++) {
        char *temp = argv[j];
        int n = mx_atoi(temp);
        int k;

        for (int i = 31; i >= 0; i--){
            k = n >> i;

            if (k & 1)
                mx_printchar('1');
            else
                mx_printchar('0');
        }
        mx_printchar('\n');
    }
}
