#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]) {
  float x = atof(argv[2]);
  float y = atof(argv[3]);
  char o = argv[1][0];
  float result;
  switch(o){
  case '+':
    result = x+y;
    break;
  case '-':
    result = x-y;
    break;
  case 'x':
    result = x*y;
    break;
  case '/':
    result = x/y;
    break;
  default:
    printf("Invalid input!\n");
  }
  printf("%f\n",result);
  return 0;
}
  
    
  
