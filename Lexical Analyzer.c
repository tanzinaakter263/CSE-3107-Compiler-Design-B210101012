#include<stdio.h>
#include<ctype.h>
int main(){
    char s[100];
    printf("Enter a line:");
    int i=0;
    fgets(s,sizeof(s),stdin);
    while(s[i]!='\0'){
         if( isspace(s[i])){
            i++;
            continue;
         }
         if(isalpha(s[i])||s[i]=='-'){
            int start=i;
         i++;
         while(isalnum(s[i])||s[i]=='-')
            i++;
         printf("Identifier:");
         for(int j=start;j<i;j++)
            putchar(s[j]);
         printf("\n");
         }
         else if(isdigit(s[i])){
            int start=i;
            i++;
            while(isdigit(s[i]))
                i++;
            printf("Number:");
            for(int j=start;j<i;j++)
                putchar(s[j]);
            printf("\n");
         }
         else{
            printf("Symbol:%c\n",s[i]);
            i++;
         }
    }
    return 0;


}
