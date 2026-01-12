#include <stdio.h>

char* mystrcpy(char* src, char* dest, int dest_size) {
    if (dest_size <= 0) {
        return dest;
    }
    char* d = dest;
    for (int i = 0; *src != '\0' && i < dest_size - 1; i++) {
        dest[i] = src[i];
    }
    dest[dest_size - 1] = '\0';
    return d;
}
int main() {
    char source[] = "Hello, World!";
    char destination[50];
    mystrcpy(source, destination, 50);
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);
    return 0;
}