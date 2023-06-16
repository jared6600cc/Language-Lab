#include <iostream>
#include <string>

#define MAXLENGTH 8
std::string inString;

int main(){
	/* Get string */
	std::cout << "Enter string: " << std::endl;
	std::cin >> inString;
	while(1){
		/* Test string */
		if(inString.length() > MAXLENGTH){
			// Entered string is too long
			std::cout << "Exceeded max string length [" << MAXLENGTH << "]\nEnter string: " << std::endl;
			std::cin >> inString;
		} else {
			std::cout << "[ Entered: " << inString << " ]" << std::endl;
			break;
		}
	}
	return 0;
}
