#include <stdio.h>
#include <stdlib.h>
extern FILE* yyin;
extern int yylex();
	

int main(int argc, char* argv[]) {
	fopen_s(&yyin, "textfile.txt", "r");
	yylex();
	return 0;
}