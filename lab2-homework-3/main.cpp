#include <stdio.h>
#include <stdlib.h>
#include "main.h"
extern FILE *yyin;
extern int yylex();
extern FILE *yyout;

int main(int argc, char* argv[]) {
	
	fopen_s(&yyin, "textfile1.txt", "r");
	fopen_s(&yyout, "output1.txt", "w");
	yylex();
	fclose(yyin);
	fopen_s(&yyin, "textfile2.txt", "r");
	fopen_s(&yyout, "output2.txt", "w");
	yylex();
	return 0;
}