#include <StringTokenizer.h>

void setup(void) {

  Serial.begin(115200);
  Serial.println();
  Serial.println("Booting Sketch...");
}

void loop(void) {

  /*
   * params:
   * 1. string to tokenize
   * 2. delimiter string
   */
  StringTokenizer tokens("aa:bb:cc:dd:ee", ":");

  while(tokens.hasNext()){
    Serial.println(tokens.nextToken()); // prints the next token in the string
  }
  
  Serial.println(tokens.nextToken()); // prints "" when there are no more tokens left.

  delay(5000);

//////////////////////////
//
//  output:
//  aa
//  bb
//  cc
//  ee
//
//////////////////////////

}