#include <stdio.h>
int main(){
char s[100];
int state=0;
int dfa[2][2]={

   {0,1},
   {1,0}

};
printf("Enter binary string:");
scanf("%s",s);
for(int i=0;s[i]!='\0';i++){

    if(s[i]!='0'&&s[i]!='1'){
        printf("Invalid input\n");
        return 0;
    }
    int symbol=s[i]-'0';
    state=dfa[state][symbol];
}
if(state==0)
    printf("Accepted\n");
else
    printf("Rejected\n");

}
