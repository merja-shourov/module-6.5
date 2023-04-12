#include<stdio.h>

int main(){   
     int n;
     scanf("%d", &n);



     if( n >=10 && n <= 99 ){
          int one = n/10;
          int two = n%10;

          if( two % one == 0 || one % two == 0){
               printf("YES\n");
          }else{
               printf("NO\n");
          }
     }


}