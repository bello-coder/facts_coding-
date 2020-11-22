#include <stdio.h>


/*
A simple recursive function
*/

int power(int x, int y); // funtion prototype; power


/*
main function 
*/
int main(void) {

  printf("The answer is %d:\n",  power(3,4)); // function call to finnd 3^4
  return 0;
}

/*Power function defintion*/
int power(int firstVal, int secVal){
  int result; 


  if (secVal == 0){ // base case 
    return 1;
  }
  else{
    return firstVal * power( firstVal, (secVal-1)); // recursive function
  }
}