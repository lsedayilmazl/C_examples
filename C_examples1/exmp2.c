/*By: Seda Yılmaz
 Email: sedayilmaz186@hotmail.com
  The purpose of the code: C program that finds the second largest element in a given array, calculates the mean and standard deviation of the array
  */


#include<stdio.h>
#include<math.h>


int main(){

double art_mean;//arithmetic mean variable
double std_dev;//standard deviation variable
double sum1=0;//variable that holds the sum to calculate the arithmetic mean
double s;//the variable I will use to find the standard deviation
double sum2=0;//the sum variable I will use to find the standard deviation
int  max1, max2;//Variables needed to find the second largest number

int array[10]={1,2,3,4,5,6,7,8,9,10};//array



 printf("Array: ");
 for(int k=0;k<10;k++)
      printf("%d ",array[k]);//print array

      max1 = array[0];//I assigned the element with index 0 of the array to max1
      max2 = array[1];//I assigned the element with index 1 of the array to max2

      for (int i = 0; i < 10 ;i++)
      {
         if (array[i] > max1) {//if element with index i is greater than max1
            max2 = max1;//assign max1 to max2
            max1 = array[i];//assign element with index i to max1
         }
         //When i=10 it will exit the loop
   }

printf("\nSecond largest element of array = %d", max2);//print the 2nd largest element of the array

for(int j=0;j<10;j++)
{
    sum1=sum1+array[j];//I sum the array elements to find the mean of the array
}
art_mean=sum1/10;//The mean is found by dividing the sum of the elements by the number of elements.
printf("\nArithmetic mean of the array = %lf",art_mean);//ortalamayı ekrana yazdırdım

for(int z=0;z<10;z++)
{
    s=art_mean-array[z];//While finding the standard deviation, each element is subtracted from the mean one by one and the difference value is found.
    s=s*s;//The differences found are squared one by one.
    sum2+=s;//the square of the differences is summed up
}
std_dev=sqrt(sum2/(10-1));//The standard deviation is calculated by dividing the sum of the squared of the differences by 1 minus the number of elements and taking the square root of it.
printf("\nStandard deviation = %lf",std_dev);//print the standard deviation

return 0;
}
