# Arduino-StringTokenizer-Library
A very simple arduino library to use java like string-tokenizer functions to split a string with delimiters.


Basic description:

Params : string to tokenize; delimiter string

Functions : 
  
  (boolean) hasNext() - returns true if more tokens are available from input string.
  
  (String) nextToken() - pops the next token and returns it. If no more tokens are avaiable, returns an empty string ("").
  

Declaration : StringTokenizer tokens( "input string", "delimiter string");

Check included example for more clarification.
