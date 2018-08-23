// Author: Cristian Canto (@xion23@mastodon.social)
// Descripción: dumb program to generate a random string
// Version: 0.1
// Fecha: 23/08/2018

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define BUFSIZE 50

void string_gen(char *s, const int size) {
    static const char alphanum[] =     "1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    srand ( time(NULL) );

    for (int count = 0; count < size; ++count) {
        s[count] = alphanum[rand() % ( sizeof(alphanum) - 1)];
    }
    s[size] = 0;
}

int main(void) 
{
	char rstr[BUFSIZE];
	string_gen(rstr, BUFSIZE);
	printf("%s", rstr);
} 
