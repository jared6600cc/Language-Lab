#include <stdio.h>
#include <string.h>

#define MAXLENGTH 8
char inString[MAXLENGTH];

void main(){
	/* Get string */
	printf("Enter string: ");
	scanf("%s", inString);
	while(1){
		/* Test string */
		if(strlen(inString) > MAXLENGTH){
			// Entered string is too long
			printf("Exceeded max string length [%d]\nEnter string: ", MAXLENGTH);
			scanf("%s", inString);
		} else {
			printf("[ Entered: %s ]\n", inString);
			break;
		}
	}
}
