/*By: Seda Yılmaz
 Email: sedayilmaz186@hotmail.com
 The purpose of the code: Code that has as many lines as the user enters and creates a triangle by decreasing the number the user enters*/

#include <stdio.h>

int main() {
  int n;
  printf("Enter the number of lines: ");//asks the user for the number of rows
  scanf("%d",&n);//get the number of rows from the user

  for(int x=1;x<=n;x++)//checks rows
  {
    for(int y=1;y<=n-x;y++)//checks for spaces
    printf(" ");
      for(int z=n-x+1;z<n+1;z++)//prints a triangle by decreasing the number entered by the user
        printf("%d",z);


    printf("\n");
  }
  return 0;
}
