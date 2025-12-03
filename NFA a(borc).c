#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);

    int in_q0 = 1;   // শুরুতে q0 তে আছি
    int in_q1 = 0;   // q1 এ নেই এখনো

   for (int i = 0; i < strlen(s); i++) {
        char c = s[i];


        int next_q0 = 0;
        int next_q1 = 0;

        // q0 থেকে 'a' পেলে q1 এ যাই
        if (in_q0 && c == 'a')
            next_q1 = 1;

        // q1 থেকে b বা c পেলে q1 এ থাকি
        if (in_q1 && (c == 'b' || c == 'c'))
            next_q1 = 1;

        // নতুন state সেট করি
        in_q0 = next_q0;
        in_q1 = next_q1;
    }

    if (in_q1)
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}














