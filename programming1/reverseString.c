#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverseString(char* s) {
    int len = strlen(s);
    char* revs = (char*)malloc((len + 1) * sizeof(char));
    int i = 0;
    len--;
    while (len >= 0) {
        revs[i] = s[len];
        len--;
        i++;
    }
    revs[i] = '\0';
    return revs;
}

int main() {
    char str[] = "hello";
    char* revStr = reverseString(str);
    printf("Reversed string: %s\n", revStr);
    free(revStr);
    return 0;
}