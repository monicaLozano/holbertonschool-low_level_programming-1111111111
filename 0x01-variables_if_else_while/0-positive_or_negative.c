#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;

  if(n == 0){
    printf("0");
    
  }else if(n > 0){
    printf("Positivo");

  }else{
    // Si no es neutro ni positivo, es negativo
    printf("Negativo");
      
  /* your code goes there */
  return (0);
}
