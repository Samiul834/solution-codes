#include <stdio.h>
#include <string.h>
int main()
{
    int i,n,x;
    char string1[201],string2[201];
    scanf("%s",string1);
    x=strlen(string1);
    for(i=0,n=0;i<x;i++){
        if(string1[i]=='W'&&i<x-2){
            if(string1[i+1]=='U'){
                if(string1[i+2]=='B'){
                    i+=2;
                    if (n > 0 && string2[n - 1] != ' ') {
                    string2[n++] = ' ';
                    }
                    continue;
                }
            }
        }
            string2[n++]=string1[i];
    }
    string2[n]='\0';
    printf("%s",string2);

}