#include "../include/debug_print.h"
#include "stdbool.h"
#include "stdio.h"


#define RED_GROUP           1
#define EXTRA_INFO_GROUP    2


int main(){
  debug_print_options o = (struct debug_print_options){ .colorscheme = FORE_BLUE };
  char                *s0 = "abc123"; char *s1 = "abc456";
  char                *s2      = "ok";
  char                *s100000 = "ok";
  //pad_string("ok");
  int                 i0 = 666;

  DP("yo", .colorscheme = FORE_RED);
  DP(i0, .colorscheme   = FORE_BLUE);
  DP(s2);
  DP(s100000);

  DP(0 + 22);
  DP(o);
  //DEBUG_PRINT(s0, .group                                         = EXTRA_INFO_GROUP, .filestream=stdout);
//  DEBUG_PRINT(s1, .colorscheme                                   = FORE_GREEN, .group = RED_GROUP);
  return(0);
}
