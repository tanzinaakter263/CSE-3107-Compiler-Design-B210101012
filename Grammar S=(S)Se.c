#include <stdio.h>
#include<ctype.h>
#include<string.h>
char s[100];
int i = 0;

int S() {
    if (s[i] == '(') {
        i++;
        if (!S()) return 0;
        if (s[i] != ')') return 0;
        i++;
        return S();
    }
    return 1;
}

int main() {
    gets(s);
    if (S() && s[i]=='\0') printf("Valid\n");
    else printf("Invalid\n");
}



