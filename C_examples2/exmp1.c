/*By:SedaYılmaz
Email: sedayilmaz186@hotmail.com
The purpose of the code: Finding how many of a given letter are in a given string.*/

#include<stdio.h>
#include<ctype.h>

int karakter_say(char *string, char ch){//fonksiyon

  int sayac=0;//a counter variable to count how many letters are given

  for(int i=0;string[i]!='\0';i++)
  {
    if(string[i]==ch || tolower(string[i])==ch)
      sayac++;
}
return sayac;
}

int main(){

char str[]="Ali Eve gel";//string
char ch='e';
printf("String %s contains %d letters %c",str,karakter_say(str,ch),ch);

  return 0;
}
