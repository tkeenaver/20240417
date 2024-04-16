#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( void) {
    char *apath;

    apath = strtok( getenv("PATH"), ";");
    while( apath != NULL) {
        printf("%s\n", apath);
        apath = strtok( NULL, ";");
    }
}
