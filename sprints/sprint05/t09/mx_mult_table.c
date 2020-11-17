int mx_atoi(const char *str);

void mx_printchar(char c);

void mx_printint(int n);

int main(int argc, char *argv[]) {
    if (argc < 3) {
        return 0;
    }

    if (mx_atoi(argv[1]) > 9 || mx_atoi(argv[1]) < 1) {
        return 0;
    }

    if (mx_atoi(argv[2]) > 9 || mx_atoi(argv[2]) < 1) {
        return 0;
    }

    int a = mx_atoi(argv[1]);
    int b = mx_atoi(argv[2]);

    if (a < b) {
        a = b;
        b = mx_atoi(argv[1]);
    }

    for (int i = b; i <= a; i++) {
        for (int j = b; j <= a; j++) {
            mx_printint(i * j);
            if (j < a)
                mx_printchar('\t');
        }
        mx_printchar('\n');
    }
    
}
