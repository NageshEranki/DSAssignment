//Boolean matrix to record all visited places.
//Choosing not to traverse stack for runtime efficiency.

int bm[7][7] = {{0}};

void printbm()
{
  for(int i=0;i<7;i++)
  {
    for(int j=0;j<7;j++)
    {
      printf("%d ",bm[i][j]);
    }
    printf("\n");
  }
}
