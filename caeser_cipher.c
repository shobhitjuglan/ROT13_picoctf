#include <stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
        //CAESER CIPHER
    //Solving picoCTF problem with code
    int length;char arr[1000];
    scanf("%s",arr);
    length=strlen(arr);
    for(int k=0;k<26;k++){
    for(int i=0;i<length;i++){
    if(isalpha(arr[i]))
    {
        if((97<=((int)arr[i]+k) && ((int)arr[i]+k)<110) || (65<=((int)arr[i]+k) && ((int)arr[i]+k)<78))
        printf("%c",(int)arr[i]+k+13);
        else
        printf("%c",(int)arr[i]+k-13);
    }
    
    //else
    //printf("%c",arr[i]);
    }
    printf("\n");
    }
