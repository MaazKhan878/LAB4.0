/**
 * Author: 
 * Date: 
 *
 * This program generates a multiplication table
 * of the size given as a command line argument.
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

  if(argc != 2) {
    printf("Error: provide an integer\n");
    exit(1);
  }

  int n = atoi(argv[1]);
  if(n <= 0) {
    printf("empty table!\n");
    exit(0);
  }

  //TODO: place your code here
  int i ,j,k;
  for(i = 1; i <= n; i++){
    printf("\t%d",j);
  }
  for(j = 1; j <= n; j++){
    printf("\n%d",j);
    for(k= 1; k<= n; k++){
      printf("\t%d",j*k);
    }
  }

  return 0;
}
