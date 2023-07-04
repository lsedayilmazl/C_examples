/*By: Seda Yılmaz
 Email: sedayilmaz186@hotmail.com
 The purpose of the code: Finding the most passed character in a string*/

#include<stdio.h>


char harfbul(char dizi[]);//Function to find the most characters

int main(){

char dizi[10]={"medeniyet!"};//string array

char c=harfbul(dizi);//call function

    return 0;
}

char harfbul(char dizi[]){
int encok= 0;//a variable for the maximum number of characters
int esitharf = 0;//variable for same characters
char sonharf = '\0';//variable to hold the most characters
for (int i = 0; i < 10; i++)
 {
  int toplam = 0;
   for (int j = 0; j < 10; j++)
     {
       if ((dizi[i] == dizi[j]) && (sonharf != dizi[i]))//if the i-index element of the array is equal to the j-index element of the array
        toplam++;//increase the sum by 1
     }
    if (toplam > encok)//if the total is greater than the number of the largest characters in the array
       {
         encok = toplam;
         sonharf = dizi[i];
       }
    else if (toplam == encok)
         esitharf = toplam;
 }//Exit the loop after comparing all the elements in the array

  if (encok > esitharf)
    printf("The most common letter is %c and a total of %d .", sonharf, encok);
  else
    printf("Most letter not found. ");

 return 1;
}
