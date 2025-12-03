#include <stdio.h>
#include <ctype.h>
#include <string.h>

char s[100];
int i = 0;

int id() {
    if (!isalpha(s[i]) && s[i] != '_') return 0;
    i++;
    while (isalnum(s[i]) || s[i] == '_') i++;
    return 1;
}

int L() {
    if (!id()) return 0;
    if (s[i] == ',') {
        i++;
        return L();
    }
    return 1;
}

int main() {
    gets(s);
    if (L() && s[i] == '\0')
        printf("Valid\n");
    else
        printf("Invalid\n");
}
