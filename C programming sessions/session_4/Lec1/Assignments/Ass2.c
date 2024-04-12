#include<stdio.h>

int main(void)
{
    char arr1[]= "Abdelrahman";
    char arr2[3];
    char Last1Char=arr1[1], Last2Char=arr1[0];
    int i=2;
    while(arr1[i]!='\0')
    {
        Last1Char=arr1[i];
        Last2Char=arr1[i-1];
        i++;
    }
    arr2[0]=Last1Char;
    arr2[1]=' ';
    arr2[2]=Last2Char; 
    arr2[3]='\0';
    printf("%s\n",arr2);
   
    
    return 0;
}