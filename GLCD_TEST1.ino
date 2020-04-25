/*
  GLCD Library - PRINT NAMES

  by POOJA KOSE

 */

// include the library header
#include <glcd.h>

// include the Fonts
#include <fonts/allFonts.h>

void setup() {
  // Initialize the GLCD
  GLCD.Init();

  // Select the font for the default text area
  GLCD.SelectFont(System5x7);
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
 GLCD.CursorTo(0,2);
   GLCD.print("POOJA KOSE");
 
  GLCD.CursorTo(0, 4);
   GLCD.print("PRIYANKA SHARMA");

  // print the number of seconds since reset:
}
