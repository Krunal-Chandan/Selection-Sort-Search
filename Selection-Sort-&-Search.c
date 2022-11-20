#include "stdio.h"

int sort(int b[], int leng);
int binary(int c[], int length, int number);

int main() 
{
  int size, len, i;
  printf("Enter the Size of Array : "); // size of array
  scanf("%d", &size);
  printf("Enter the length of Array : "); // length of array
  scanf("%d", &len);
  int a[size], num;
  printf("Enter the elements of the Array : "); // elements of array
  for ( i = 0; i < len; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("Your Array is : "); // unsorted array 
  for ( i = 0; i < len; i++)
  {
    printf("%d \n", a[i]);
  }
  sort(a, len); // function calling
  printf("Your sorted Array is : "); // sorted array
  for ( i = 0; i < len; i++)
  {
    printf("%d \n", a[i]);
  }
  printf("Enter the number to be searched : "); // no. for search
  scanf("%d", &num);
  binary(a,len,num); // function calling
  return 0;
}
// Sorting
int sort(int b[], int leng)
{
  int i, j, posi, temp;
  for ( i = 0; i < leng-1 ; i++)
  {
    posi = i;
    for ( j = i+1 ; j < leng ; j++)
    {
      if (b[i] > b[j])
      {
        posi = j;
      }      
    }
    if (posi != i)
    {
      temp = b[i];
      b[i] = b[posi];
      b[posi] = temp;
      printf("%d \n", i);
    }    
  }  
}
// Searching
int binary(int c[], int length, int number)
{
  int i;
  for ( i = 0; i < length-1 ; i++)
  {
    if (c[i]==number)
    {
      printf("[%d] is at [%d] position.", number, i+1);
    } 
  }  
}