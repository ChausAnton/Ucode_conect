
void mx_printstr(const char *);

char *mx_strchr(const char *s, int c);

void mx_printchar(char c);

int mx_strlen(const char *);

int main(int argc, char *argv[]) {
    if (argc < 0) {
        return 0;
    }
    char *temp = argv[0];
    while(mx_strchr(temp, '/') != 0) {
        temp = mx_strchr(temp, '/');
        temp++;
    }
    mx_printstr(temp);
    mx_printchar('\n');  
}
