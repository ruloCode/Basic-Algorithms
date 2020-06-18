#include "stdlib.h"
#include "stdio.h"

#define SIZE 5

int values[SIZE], front = -1, rear= -1;

void enQueue(int value){
  // revisar que hay espacios
  if(rear == SIZE -1)
    printf("Nuestro Queue esta llena \n");
  else
  {
  // revisar si es la primera insercción
    if(front == -1)
      front = 0;
    rear ++;
    values[rear] = value;
    printf("Se inserto el valor %d correctamente \n",value);
  }
}

void deQueue(){
  // revisar si hay elementos
  if(front == -1)
    printf("Nuestro Queue esta vacio \n");
  else{
    printf("se elimino el valor %d \n", values[front]);
    front ++;
    if(front > rear)
      front = rear = -1;
  }
}

int main(int argc, char const *argv[])
{
  /* code */
  enQueue(1);
  enQueue(2);
  enQueue(3);
  deQueue();
  printf("Values are %d", values[rear]);
  return 0;
}
