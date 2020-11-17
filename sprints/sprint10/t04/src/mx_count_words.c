#include "../inc/header.h"

int mx_count_words(char *str) {
    int words = 0;
    bool space = false;
    for (int i = 0; str[i] != '\0'; i++) {
        if (space == false && !(mx_isspace(str[i]))) {
            words++;
            space = true;
        }
        else if (space == true && mx_isspace(str[i])) space = false;
    }
    return words;
}
