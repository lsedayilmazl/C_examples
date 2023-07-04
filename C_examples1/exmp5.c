/*By: Seda Yılmaz
 Email: sedayilmaz186@hotmail.com
The purpose of the code: Printing an array in reverse with the recursive function*/


#include <stdio.h>

char cevir(char dizi[],int a);

int main(void) {
  char dizi[]="Write Reverse";//dizi
  int n=11;//The number of indexes in the array is one less than the number of elements of the array. 
   cevir(dizi,n);//function call
  return 0;
}

char cevir(char dizi[],int a){//recursive function

  if(a<0)
     return 0;
  else
  {
    int k=dizi[a];
    printf("%c",k);
    return cevir(dizi,a-1);
  }

}
