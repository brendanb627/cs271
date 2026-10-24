/****************************************
 * C-ploration 4 for CS 271
 * 
 * [NAME] Brendan Bessman
 * [TERM] FALL 2027
 * 
 ****************************************/
#include "parser.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
 
 #define MAX_LINE_LENGTH 200

int main(int argc, const char *argv[])
{		
	if (argc != 2) {
		printf("Usage: %s [filename]\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	FILE *fin = fopen( argv[1], "r" );
	if (fin == NULL) {
		perror("Unable to open file!");
		exit(EXIT_FAILURE);
	}
	char out_file[100];
	strcpy(out_file, argv[1]);
	strcat(out_file, ".echo");
	FILE *fout = fopen( out_file, "w+" );
	
	char line[MAX_LINE_LENGTH] = {0};
	while (fgets(line, sizeof(line), fin)) {
		strip(line);
		if (*line == '\0')
			continue;
		printf("%s\n", line);
	}
	fclose(fin);
	fclose(fout);
	
	return 0;		
}

