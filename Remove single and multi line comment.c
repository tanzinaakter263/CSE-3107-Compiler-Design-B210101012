#include<stdio.h>
int main(){
    int c,prev=0;
    while((c==getchar())!=EOF){
       if(prev=='/'&&c=='/'){
        while((c==getchar()!=EOF)&&c!='\n');
        prev=0;
        if(c=='\n')
            putchar('\n');
            continue;

       }
       else if(prev=='/'&&c=='*'){
        int end=0;
        while(!end&&(c==getchar())!=EOF){
              if(c=='*'&&(c=getchar())=='/')
                end=1;
              }
        prev=0;
        continue;
       }
       if(prev) putchar(prev);
       prev=c;

    }
    if(prev) putchar(prev);
        return 0;

}

/*#include <stdio.h>

int main() {
    int c, prev = 0;

    while ((c = getchar()) != EOF) {
        if (prev == '/' && c == '/') { // single-line comment
            while ((c = getchar()) != EOF && c != '\n');
            prev = 0;
            if (c == '\n') putchar('\n');
            continue;
        }
        else if (prev == '/' && c == '*') { // multi-line comment
            int end = 0;
            while (!end && (c = getchar()) != EOF) {
                if (c == '*' && (c = getchar()) == '/') end = 1;
            }
            prev = 0;
            continue;
        }

        if (prev) putchar(prev);
        prev = c;
    }

    if (prev) putchar(prev);

    return 0;
}
*/
