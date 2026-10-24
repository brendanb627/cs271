/****************************************
 * C-ploration 4 for CS 271
 * 
 * [NAME] Brebdnandnasjnd
 * [TERM] FALL $YEAR$
 * 
 ****************************************/
#include "parser.h"

/* Function: strip
 * -------------
 * remove whitespace and comments from a line
 *
 * s: the char* string to strip
 *
 * returns: the stripped char* string
 */
char *strip(char *s) {
	char s_new[strlen(s) + 1];
	s_new[0] = '\0';
	int i = 0;
	for (char *s2 = s; *s2; s2++) { 
		if (*s2 == '/' && *(s2+1) == '/') {
			break;
		}
		else if (!isspace(*s2)) {
			s_new[i++] = *s2;
		}
	}
	s_new[i] = '\0';
	strcpy(s, s_new);
	return s;
}

/* Function: parse
 * -------------
 * iterate each line in the file and strip whitespace and comments. 
 *
 * file: pointer to FILE to parse
 *
 * returns: nothing
 */
void parse(FILE * file){
	
	// your code here
	
}