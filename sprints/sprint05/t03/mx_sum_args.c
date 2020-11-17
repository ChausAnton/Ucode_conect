#include <stdbool.h>
void mx_printint(int n);

bool mx_isspace(char);

bool mx_isdigit(int);

int mx_atoi(const char *str);

void mx_printchar(char c);


int main(int argc, char *argv[]) {
    int count = 0;
    int number = -1;

    for(int i = 1; i < argc; i++) {
        char *temp = argv[i];
        for (int j = 0; temp[j] != '\0'; j++) {
            if ((number == -1) && (mx_isspace(temp[j]) == 1 || temp[j] == '-' || temp[j] == '+' || mx_isdigit(temp[j]) == 1)){
                if(mx_isdigit(temp[j]) == 1) {
                    number = 1;
                }
                else if(temp[j] == '+' && number == -1) {
                    temp[j] = ' ';
                    number = 1;
                    continue;
                }
                else if(temp[j] == '-' && number == -1) {
                    number = 1;
                    continue;
                }
                
            }
            if(mx_isdigit(temp[j]) == 0 && number == 1) {
                    number = 0;
                    break;
            }
        }
        
        if(number != 0)
            count += mx_atoi(temp);
        number = -1; 
    }
    mx_printint(count);
    mx_printchar('\n');
}
