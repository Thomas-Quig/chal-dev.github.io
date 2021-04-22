#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
*   cskel was developed for chal.dev by Thomas Quig (quig.dev)
*   
*   Created early 2020, edited for clarity and uploaded 4/22/21
*
**/


/**
* Function to print out the flag from flag.txt, reads it character by character so it isnt just loaded in right away
**/
void give_flag() {
    FILE *f = fopen("flag.txt", "r");
    if (f != NULL) {
        char c;
        while ((c = fgetc(f)) != EOF) {
            putchar(c);
        }
    }
    else {
        printf("Couldn't open flag file!\n");
    }
    fclose(f);
}

/**
* You don't need to have a vulnerable function, 
* it is valuable to have for easier challenges so people know where to look.
**/
void vulnerable()
{
    // TODO put your code here!
    give_flag();
}

int main()
{
    // These functions set the buffers and makes sure flushing works properly. Ignore them
    setvbuf(stdin,NULL,_IONBF,0);
    setvbuf(stdout,NULL,_IONBF,0);
    printf("--== chal.dev cskel file ==--\n");
    vulnerable();
}
