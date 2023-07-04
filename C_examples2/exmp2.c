/*By:SedaYılmaz
Email: sedayilmaz186@hotmail.com
The purpose of the code:find how many a certain word is in a given paragraph*/

#include<stdio.h>
#include<string.h>

int kelime_say(char *paragraf,char *kelime){//function
  int sayac=0;


  const char del1[]=" ";
  char *token;
  token=strtok(paragraf,del1);// to separate the paragraph into individual words
    while(token!=NULL)
    {
      int b=strcmp(token,kelime);// returns 0 if the searched word and the token, which is the word of the paragraph, are equal, otherwise it returns a different result
      if(b==0)// if the value from the strcmp function is equal to 0
        sayac++;

      token=strtok(NULL,del1);//goes to the next word of the paragraph
    }


return sayac;
}

int main(){
char paragraf[]={"bir berber bir berbere gel beraber bir berber dükkanı açalım demiş "};
char kelime[]="berber";//word
printf(" There are %d of the word -%s-.",kelime_say(paragraf,kelime),kelime);

  return 0;
}
