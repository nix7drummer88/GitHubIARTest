
#include "io430.h"

int main( void )
{
  // Stop watchdog timer to prevent time out reset
  WDTCTL = WDTPW + WDTHOLD;
  
  char message[100] = "Here's some text.";
  
  int x = 5;
  int y = 400;
  //Here is a comment
  
  char boolVal = 0;
  
  char testChar = 'f';

  return 0;
}
//test comment foo
