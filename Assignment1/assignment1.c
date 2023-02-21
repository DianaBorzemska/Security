#include <stdlib.h> 
#include <unistd.h> 
#include <stdio.h>
#include <string.h>

int hidden; 

void vuln() {

    printf("hidden is currently: %d\n", hidden); 
    if( hidden == 255 ){
        printf("Success 2/2.\n");
    }
}

int main(int argc, char **argv) {
    char buffer[128];
    hidden = 0;
    fgets(buffer, 200, stdin); 

    printf("You have entered: " );
    printf( buffer );

    if( hidden == 0 ){
        exit(1); 
    }
    printf("Success 1/2.\n" );
}
