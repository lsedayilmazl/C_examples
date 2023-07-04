/*By:SedaYılmaz
Email: sedayilmaz186@hotmail.com
The purpose of the code: Recursive function that returns 1 if the word is pronounced the same from the beginning and end, 0 otherwise*/

#include<stdio.h>

  int ters_ile_ayni_mi( char kelime[],int uzunluk){//function

    if(uzunluk<=1)// if the length of the word is 1, the pronunciation is the same from the beginning and the end. returns 1
      return 1;
    if ((*kelime)==kelime[uzunluk-1])//checks if the first letter and the last letter of the word are the same
      return ters_ile_ayni_mi(kelime+1, uzunluk-2);//if same, returns the next letter and the penultimate letter of the word to the function
    else
     return 0;
}
int main() {

char kelime[100];//word
scanf("%s",kelime);
int n;//for the find length of the word
while(kelime[n]!='\0')
   n++;
printf("%d",ters_ile_ayni_mi(kelime,n));// the word and its length are sent to the function. The response is printed


  return 0;
}
