#include <stdio.h>
#include <stdlib.h>
extern FILE* yyin;
extern int yylex();
extern FILE* yyout;

int main(int argc, char* argv[]) {
	fopen_s(&yyin, "textfile.txt", "r");
	fopen_s(&yyout, "newoutput.txt", "w");
	yylex();
	return 0;
}