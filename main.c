#include <stdio.h>

static int z = 6;

int str_lenght(char t[])
{
    int i = 0;

    for( ; ; ) 
    { 
        if (t[i]=='\0') return i;
        i++;
    }
    
    return i;
} 

int main()
{
    //var declaration
    int x;

    x=5;

    int y =0;
    int a =1, b = 2;

    const float price = 3.14;

    char c= 'a';
    char s[]="hola";

    for (int i = 0; i < str_lenght(s); i++)
    {
        /* code */
        printf("%c",s[i]);
    }
    

    printf("\nx = %d \t y= %i \t price= %.2f \t %c \t %s \t %c \t \n",x,y,price,c,s,s[2]);
    return 0;
}