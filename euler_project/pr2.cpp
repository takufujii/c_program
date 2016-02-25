#include<stdio.h>
#define N 4000000
#define A1 1
#define A2 2

int main(void)
{
  long int n1,n2,tmp,a=0;
  n1=A1;n2=A2;
  if(n1%2==0) a+=n1;
  if(n2%2==0) a+=n2;
  
  while(n1+n2<=N){
    tmp=n1+n2;
    n1=n2; n2=tmp;
    if(n2%2==0) a+=n2;
  }
  printf("problem002: %ld\n",a);
  return 0;
}

