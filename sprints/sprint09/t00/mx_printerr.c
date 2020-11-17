#include "printerr.h"

void mx_printerr(const char *s) {
    int len = mx_strlen(s);
    write(2, s, len);
}
