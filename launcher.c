#include <stdio.h>

   int main( int argc, const char * argv[] )

   {      
        char command[256];
	char *s = getenv("HOME");
	sprintf(command, "ruby \"%s/get_iplayer/iPlayer\"", s);

        int status = system( command );

        return status;
   }
