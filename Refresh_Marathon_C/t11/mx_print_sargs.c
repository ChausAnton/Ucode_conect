
void mx_printchar(char c);

void mx_printstr(const char *);

int mx_strcmp(const char *s1, const char *s2, int n);

int mx_strlen(const char *);

int main(int argc, char *argv[]) {
    for(int i = 1; i < argc; i++) {
        for(int j = 1; j < argc - 1; j++) {
            if(mx_strcmp(argv[j], argv[j + 1], mx_strlen(argv[j])) > 0) {
                char *temp = argv[j];
                argv[j] = argv[j + 1];
                argv[j + 1] = temp;
            }
        }
    }
    for(int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
    return 0;
}
