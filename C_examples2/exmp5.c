/*By:SedaYılmaz
Email: sedayilmaz186@hotmail.com
The purpose of the code: concatenating 2 strings using pointer*/

#include <stdio.h>
#include <stdlib.h>

char* string_birlestir(char *str1, char *str2){//function
    int i = 0, j = 0, k;//variables
    while (str1[i] != '\0')
       i++;//find the number of elements of the 1st string
    while (str2[j] != '\0')
      j++;//find the number of elements of the 2nd string
    char *birlesim = (char*)malloc(sizeof(char)*(i+j+1));// memory allocated for new concatenated string
    for (k = 0; k < i; k++)
      {
        *(birlesim + k) = str1[k];//Assign the k-indexed element of the string to the k-index element of the new string
      }
      *(birlesim+k)=' ';//puts a space between two words
    for (;k<=i+j;k++)
      {
        *(birlesim + k+1) = str2[k - i];//Do the same for the 2nd string
      }
    birlesim[k] = '\0';
    return birlesim;

}

int main(void){
    char *str1 = "Ali";//first string
    char *str2 = "eve gel";//second string
    str1 = string_birlestir(str1, str2);//function call
    printf("%s", str1);//print new string
    free(str1);// the space allocated in the memory is left empty when the job is finished
    return 0;
}
