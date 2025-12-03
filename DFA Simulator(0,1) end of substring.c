#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    printf("Enter binary string:");
    scanf("%s",s);
    int state=0;
    int i=0;
    while(s[i]!='\0'){
        char c=s[i];
        switch(state){
    case 0:
        if(c=='0') state=1;
        else if(c=='1') state=0;
        else{
            printf("Invalid\n");
        return 0;

        }
       break;
       case 1:
        if(c=='0') state=1;
        else if(c=='1') state=2;
        else{
            printf("Invalid\n");
        return 0;

        }
       break;
       case 2:
        if(c=='0') state=1;
        else if(c=='1') state=0;
        else{
            printf("Invalid\n");
        return 0;

        }
       break;
    }
    i++;
    }
    if(state==2)
        printf("Accepter\n");
    else
        printf("Rejected\n");

}
