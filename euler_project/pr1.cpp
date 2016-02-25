#include<stdio.h>
#define N 1000
#define N1 3
#define N2 5

int main(void)
{
  int i,a=0;
  for(i=1;i<N;i++){
    if(i%N1==0) a+=i;
    else if(i%N2==0) a+=i;
  }
  printf("problem001: %d\n",a);
  return 0;
}

