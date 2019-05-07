#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "bm.h"
#include "problem.h"
#include "engine.h"

int main()
{
  ppush(0,0);
  pcurrent = phead;
  printf("The game is on!\n");
  whereami();
  solve();
  print();
  whereami();
  printbm();
  // printf("(%d,%d)\n",phead->x,phead->y);
  return 0;
}
