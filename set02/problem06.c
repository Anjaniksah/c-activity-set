#include <stdio.h>
#include <string.h>

void input_string(char *a) {
    printf("Enter a string: ");
    scanf("%s", a);
}

void str_reverse(char *str, char *rev_str) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        rev_str[length - 1 - i] = str[i]; 
    }
    rev_str[length] = '\0';
}

void output(char *a, char *reverse_a) {
    printf("Original string: %s\n", a);
    printf("Reversed string: %s\n", reverse_a);
}

int main() {
    char original[100], reversed[100];
    input_string(original);
    str_reverse(original, reversed);
    output(original, reversed);
    return 0;
}