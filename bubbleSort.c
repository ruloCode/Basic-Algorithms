#include "stdio.h"

void change_pos(int *n1, int *n2)
{
  int temp = *n1;
  *n1 = *n2;
  *n2 = temp;
}

void bubbleSort(int vector_input[], int n)
{
  int i, j;
  for(i=0; i < n-1; i++)
  {
    for(j=0; j < n-i-1; j++)
    {
      if(vector_input[j] > vector_input[j+1])
        change_pos(&vector_input[j],&vector_input[j+1]);
    }
  }
}

int print_vector(int vector_input[], int n )
{
  int i;
  for(i = 0; i<n; i++)
  {
    printf("%d  ,", vector_input[i]);
  }
  printf("\n ordering over");
}

int main(int argc, char const *argv[])
{
  /* code */
  int vector_input[] = {100, 50, 5, 3, 9};
  // byte size
  int n = sizeof(vector_input)/sizeof(vector_input[0]);
  bubbleSort(vector_input, n);
  print_vector(vector_input, n);
  printf("\n");
  return 0;
}
