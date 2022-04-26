#include "../include/debug_print.h"
#include "stdbool.h"
#include "stdio.h"


#define RED_GROUP           1
#define EXTRA_INFO_GROUP    2


void f0(int i){
}


int main(){
  char *s0 = "abc123", *s1 = "abc456", *s2 = "ok", *s100000 = "ok";
  int  i0 = 666;

  DP("yo", .colorscheme = FORE_RED);
  DP(i0, .colorscheme   = FORE_BLUE);
  DP(s1, .colorscheme   = FORE_GREEN);
  DP(s1, .colorscheme   = FORE_WHITE);
  DP(s2);
  DP(s2, .filestream = stderr);
  DP(s100000);

  DP(0 + 22);
  return(0);
}
