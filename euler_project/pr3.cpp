#include<stdio.h>
#define N 600851475143

int main(void)
{
  long int tmp,a;
  tmp=N;
  for(a=2;a<tmp;a++){
    if(tmp%a==0) tmp=tmp/a;
  }
  printf("problem003: %ld\n",a);
  return 0;
}

