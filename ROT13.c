#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    //ROT13
    //Solving picoCTF problem with code
    int length;char arr[100];
    scanf("%s",arr);
    length=strlen(arr);
    for(int i=0;i<length;i++){
    if(isalpha(arr[i]))
    {
        if((97<=(int)arr[i] && (int)arr[i]<110) || (65<=(int)arr[i] && (int)arr[i]<78))
        printf("%c",(int)arr[i]+13);
        else
        printf("%c",(int)arr[i]-13);
    }
    else
    printf("%c",arr[i]);
    }

  
}
