#include <stdio.h>
#include <stdbool.h>

int ft_strlen(char *str) {
    int i = 0;

    while (str[i]) {
        i++;
    }

    return i;
}

bool checkPalindrome(char *str) {
    int start = 0;
    int end = ft_strlen(str) - 1;

    while (start < end) {
        if (str[start] == str[end]) {
            start++;
            end--;
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    char str[] = "";

    printf("%s\n", checkPalindrome(str) ? "true" : "false");
    return 0;
}