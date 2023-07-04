/*By:SedaYılmaz
Email: sedayilmaz186@hotmail.com
The purpose of the code: Printing the reverse of a string using a pointer*/


#include <stdio.h>
//fonksiyon
char *ters_cevir(char *str){//function

  char *p1,*p2;// I defined two pointers. One will point to the beginning of the array, and the other to the beginning of the next element of the array.
  char temp;//define a temporary variable temp for relocation
for(int i=0;str[i]!='\0';i++){
  p1=str;//p1 will display the address of the first element of the array
  p2=++str;//p2 will display the address of the next element of the array
  for(;*p1!='\0';p1++)//loop to replace elements.
  {
    for(;*p2!='\0';p2++)//loop to replace elements.
    {
     temp=*p1;
     *p1=*p2;
     *p2=temp;
   }// so that the positions of the elements change in order
    p2=++str;//I took the first element to the end. After that, I increased the str by 1 so that it would apply the same process to the other elements.
  }
}
return str;//Returns the reversed version of the string.
}

int main(){

  char str[]="merhaba";//string 
  ters_cevir(str);//function call
  printf("%s",str);

  return 0;
}
