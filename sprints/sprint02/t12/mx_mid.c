int mx_mid(int, int, int);

int mx_mid(int a, int b, int c) {
    if (a > b) {
        if (a > c){
           if (b > c) {return b;}
           return c;
        }
        return a;
    }
    else {
        if (b > c) {
            if (a > c) {return a;}
            return c;
        }
        return b;
    }
}
