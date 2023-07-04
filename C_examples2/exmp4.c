/*By:SedaYılmaz
Email: sedayilmaz186@hotmail.com
The purpose of the code: Replace one word in the string with another word using a pointer. */


#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

//Functions
char* ters_cevir(char *string, char *aranankelime, char *yenikelime);
char* ters_cevir(char *string, char *aranankelime, char *yenikelime){

  int i=0,j=0,k=0;
  int a=0;
  while(string[i]!='\0')
  i++;
  while(aranankelime[j]!='\0')
  j++;
  while(yenikelime[k]!='\0')
  k++;

  char *yeni=(char*)malloc(sizeof(char)*(i+k+1));

  for(int x=0;x<i+j+k+1;x++)
  {
      if(string[x]==aranankelime[a])
      {
          yeni[x]=yenikelime[a];
          a++;
      }
      else if(a>=j && a<k)
      {
          yeni[x]=yenikelime[a];
          a++;
      }
      else if(a>=k)
      {
          yeni[x]=string[x-j+1];
          a++;
      }
      else {
      yeni[x]=string[x];
      }
  }

return yeni;

}

int main() {
    

    char *ptr="Ali eve gel";//stirng
    char *aranan="eve";//word to be changed
    char  *yeni="okula";//new word

    printf("%s.",ters_cevir(ptr,aranan, yeni));
    return 0;
}
