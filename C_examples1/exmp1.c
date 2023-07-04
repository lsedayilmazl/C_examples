/*By: Seda Yılmaz
  Email: sedayilmaz186@hotmail.com
  The purpose of the code: C program that sorts an array from largest to smallest by finding the maximum array element
*/

#include <stdio.h>

int main()
{
  int numbers[] = {34, 2, 5, -4, 5, 2, 21, 55, 65};
  // variable for relocating array elements

  for (int i = 0; i < 9; i++)
  {
    int temp;
    for (int j = 0; j < 9; j++)
      if (numbers[i] > numbers[j])
      {                          // We're doing some sort of relocation from here.
        temp = numbers[i];       // I assigned the x-indexed element of the array to temp
        numbers[i] = numbers[j]; // assigns the y-indexed element of the array to the x-indexed element
        numbers[j] = temp;       // temp is assigned to the y-indexed element of the array
      }
  }
  //output of the sorted array

  for(int x =0; x<=8;x++){
     printf("%d ",numbers[x]);
   }
  return 0;
  
}
