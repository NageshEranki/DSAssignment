//Solver function


int generate()
{
  int x = pcurrent->x;
  int y = pcurrent->y;
  int count = 0;
  if(maze[x-1][y] && bm[x-1][y] != 1 && x-1>-1)
  {
    ppush(x-1,y);
    count++;
  }
  if(maze[x][y-1] && bm[x][y-1] != 1 && y-1>-1)
  {
    ppush(x,y-1);
    count++;
  }
  if(maze[x+1][y] && bm[x+1][y] != 1 && x+1<7)
  {
    ppush(x+1,y);
    count++;
  }
  if(maze[x][y+1] && bm[x][y+1] != 1 && y+1<7)
  {
    ppush(x,y+1);
    count++;
  }
  if(count > 1)
  {
    printf("Reached a junction at: (%d,%d)\n",x,y);
    jpush(x,y);
  }
  if(count == 0)
  {
    printf("Reached a dead-end at: (%d,%d)\n",x,y);
    return 0;
  }
  return 1;
}

void gotophead()
{
  bm[pcurrent->x][pcurrent->y] = 1;
  pcurrent = phead;
}

void solve()
{
 while(pcurrent->x != 6 || pcurrent->y != 6)
 {
    int foo = generate();
    if(foo == 1)
    {
      gotophead();
    }
    else
    {
      while(phead->x != jhead->x || phead->y != jhead->y)
      {
        printf("Stuck here\n");
        pcurrent = NULL;
        ppop();
      }
      jpop();
      pcurrent = phead;
    }
 }
 // whereami();
 printf("The rat has cleared the maze along the following path:\n");
 print();
 printf("Game Over!\n");
}
