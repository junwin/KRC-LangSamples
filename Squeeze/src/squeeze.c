#include <stdio.h>


void squeeze(char s[], char ch) {
	int i = 0, j = 0;
	while(s[i]) {
		if(s[i] != ch) 
			s[j++] = s[i];
		i++;
	}
	s[j] = '\0';
}
