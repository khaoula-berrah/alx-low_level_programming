#include <stdio.h>
void printfIntroduction(void)__attribute__((constructor));
/**
  * printfIntroduction - Function to print introductory lines.
  * the function is exucuted.
  */

void printfIntroduction(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
