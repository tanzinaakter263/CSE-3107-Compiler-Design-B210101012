 #include <stdio.h>

char s[100];
int i=0;

int S() {
    if (s[i]=='a') {
        i++;
        if (s[i]=='b') {
            i++;
            return 1;
        }
        if (!S()) return 0;
        if (s[i]=='b') { i++; return 1; }
    }
    return 0;
}

int main() {
    gets(s);
    if (S() && s[i]=='\0') printf("Valid\n");
    else printf("Invalid\n");
}



