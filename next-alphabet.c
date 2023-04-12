#include<stdio.h>

int main(){
     char ch,next;
     ch = getchar();

     if( ch == 'z' )
          ch = 'a';
     else ch = ch + 1;

     printf("%c\n", ch);
}