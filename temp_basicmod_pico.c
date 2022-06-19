#include <stdio.h>

int main()
{
    //Basic Mod1
    //Picoctf
    char dec_string[30];
    for(int i=0;dec_string[i]!=EOF;i++){
        int j,k;
        scanf("%d",&k);
        j=(k%36);
        if(0<=j<=25){
           dec_string[i]=(char)(j+97) ;
        }
        else if(26<=j<=35){
            dec_string[i]='j-26';
        }
        else if(j==36){
            dec_string[i]='_';
        }
    }
    printf("%s",dec_string[30]);
    
}
