/*By: Seda Yılmaz
 Email: sedayilmaz186@hotmail.com
 The purpose of the code: Finding the sum of the digits of the number entered by the user with the recursive function*/


#include<stdio.h>

int basamaktopla(int n);//function

int main(){
  int n;//variable for the number entered by the user
  printf("Enter a number: ");//asks the user for a number
  scanf("%d",&n);//get a number from the user

  printf("The sum of the digits of the number %d",basamaktopla(n));//fonksiyon çağırılır ve fonksiyondan gelen değer ekrana bastırılır

  return 0;
}
int basamaktopla(int n){//function
  if(n==0)
    return 0;
  else//diğer durumlarda
    return (n%10)+basamaktopla(n/10);//the remainder of the division of the number by 10 is the last digit of the number.
  }                                  //The result from the division of the number by 10 is its other digits.
                                     // These values are summed until n==0.
