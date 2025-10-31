#include <stdio.h>
#include <string.h>

void check_a() {
    char str[100];
    printf("\nStep 1: Enter 'a': ");
    scanf("%s", str);
    if (strcmp(str, "a") == 0)
        printf("Step 1 Accepted\n");
    else
        printf(" Step 1 Rejected\n");
}

void check_b() {
    char str[100];
    printf("\nStep 2: Enter 'b': ");
    scanf("%s", str);
    if (strcmp(str, "b") == 0)
        printf("Step 2 Accepted\n");
    else
        printf("Step 2 Rejected\n");
}

void check_a_or_b() {
    char str[100];
    printf("\nStep 3: Enter 'a' or 'b': ");
    scanf("%s", str);
    if (strcmp(str, "a") == 0 || strcmp(str, "b") == 0)
        printf("Step 3 Accepted\n");
    else
        printf("Step 3 Rejected\n");
}

void check_a_or_b_star() {
    char str[100];
    int valid;
    printf("\nStep 4: Enter any combination of 'a' and 'b' (including empty): ");
    scanf("%s", str);
    valid = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'b') {
            valid = 0;
            break;
        }
    }
    if (valid)
        printf("Step 4 Accepted\n");
    else
        printf("Step 4 Rejected\n");
}

void check_a_or_b_star_a() {
    char str[100];
    int valid;
    printf("\nStep 5: Enter any combination of 'a' and 'b' ending with 'a': ");
    scanf("%s", str);
    valid = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'b') {
            valid = 0;
            break;
        }
    }
    if (valid && str[strlen(str)-1]=='a')
        printf("Step 5 Accepted\n");
    else
        printf("Step 5 Rejected\n");
}

int main() {
    printf("Step-wise input for regex (a|b)*a\n");

    check_a();
    check_b();
    check_a_or_b();
    check_a_or_b_star();
    check_a_or_b_star_a();

    //printf("\nAll steps done.\n");

    return 0;
}
