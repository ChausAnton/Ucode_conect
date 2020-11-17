#include <stdlib.h>

char *mx_nbr_to_hex(unsigned long);

char *mx_strnew(const int);

char *mx_strnew(const int size) {

    char *str = (char*) malloc((size + 1) * sizeof(char));

    if (str == NULL || size < 0) {
        return NULL;
    }

    for (int i = 0; i < size; i++) {
        str[i] = '\0';
    }
    str[size] = '\0';
    return str;
}

char *mx_nbr_to_hex(unsigned long nbr) {
    unsigned long temp = 0;
    unsigned long quot = nbr;
    int length = 0;
    while(quot != 0) {
        quot = quot/16;
        length++;
    }
    quot = nbr;
    char *hexdecnum = mx_strnew(length);
    int i = 0;
    int j = 0; 
    while(quot != 0) {
        temp = quot % 16;
        if(temp < 10) { 
			temp=temp + 48; 
		} 
		else { 
			temp = temp + 87; 
		}
        j++;
        quot = quot/16;
        hexdecnum[i++] = temp;
    }
    j--;
    for (int i = 0; i < j; i++, j--){
        char temp1 = hexdecnum[i];
        hexdecnum[i] = hexdecnum[j];
        hexdecnum[j] = temp1;
    }
    
    return hexdecnum;   
}
