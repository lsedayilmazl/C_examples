/*By: Seda Yılmaz
 Email: sedayilmaz186@hotmail.com
 The purpose of the code: Finding the sum of a string of numbers using a recursive function*/

#include<stdio.h>


int topla(int dizi[],int a);//function

int main(){


int dizi[10]={1,2,3,4,5,6,7,8,9,10};//array
int a=9;

printf("sum of elements of array of numbers %d",topla(dizi,a));

  return 0;
}

int topla(int dizi[],int a){
  if(a<0)
    return 0;
  else
    return dizi[a]+topla(dizi,a-1);
}
