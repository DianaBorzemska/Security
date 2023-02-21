#include <string.h>
#include <stdio.h>
#include <unistd.h> 
#include <stdlib.h> 

int target;

void vuln(char *string) {

    printf(string); 

    if(target == 255) {
        printf("you have modified the target :)\n");
    }  else {
        printf("target is %d :(\n", target);
    }
}

int main(int argc, char **argv) {

    vuln(argv[1]);
}
//0x5655900c
//python2 input.py > inString 