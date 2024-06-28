#include <stdio.h>
#include <assert.h>

int alternative(int n1, int n2, int n3) {
  int res ;
	
  if (n1 > 8) {
    res = 3;
  } else {
    if (n3 == 20) {
      res = 2;
    } else {
      if ((n2 >= 10) && (n3 >= 10)) {
        res = 1;
      } else {
        res = 0;
      }
    }
  }
  
  return res;
}

int main(){
  assert(alternative(0, 4, 5) == 0); //0
  assert(alternative(7, 19, 10) == 1); //1
  assert(alternative(5, 1, 20) == 2); //2
  assert(alternative(10,20,9) == 3); //3

  return 0;
}