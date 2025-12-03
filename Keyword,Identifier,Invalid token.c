 #include<stdio.h>
 #include<string.h>
 #include<ctype.h>
int isKeyword(char *word){
 char *Keywords[]= {"int","float","double","for","if","else","while","void","char","return"};
 for(int i=0;i<10;i++)
    if(strcmp(word,Keywords[i])==0) return 1;
    return 0;
 }
 int isIdentifier(char *word){
     if(!isalpha(word[0])||word[0]=='-') return 0;
     for(int i=1;word[i]='\0';i++)
        if(!isalnum(word[i])||word[i]=='-') return 0;
     return 1;
}
int main(){
    char word[50];
    printf("Enter  words:");
    while(scanf("%49s",word)!=EOF){

        if(isKeyword(word))
            printf("%s:Keyword\n",word);
        else if(isIdentifier(word))
            printf("%s:Identifier\n",word);
        else
            printf("%s:Invalid token\n",word);
    }
    return 0;

}

