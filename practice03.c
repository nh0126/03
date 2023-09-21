#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char input_char, output_char;
	
	printf("enter a character : ");
	scanf("%c", &input_char);
	
	output_char = input_char + 1;
	
	printf("the next character of %c (%i) is %c (%i)\n", input_char, input_char, output_char, output_char);
	
	return 0;
}
