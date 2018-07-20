#include<stdlib.h>
#include<stdio.h>
void main()
{
  char *str, c;
  int i = 0, j = 1;

  str = (char*)malloc(sizeof(char));

 

  while (c != '\n') {
    // read the input 
    scanf("%c",&c);

    // re-allocate (resize) memory for character read to be stored
    str = (char*)realloc(str, j * sizeof(char));

    // store read character by making pointer point to c
    str[i] = c;

    i++; //index
    j++; //length
  }

  str[i] = '\0'; // at the end append null character to mark end of string

  printf(" %s", str);

  free(str); // important step the pointer declared must be made free
}
