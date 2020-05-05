#include <cstdio>
using namespace std;

 
int main ()
{
		const char *cstring = "String" " foo"; //concatenate strings
	
		
		printf ("the string is: %s\n", cstring);
		
		for(unsigned int i =0; cstring[i]; i++)
		{
			printf("%02d: %c \n",i,cstring[i]);
		}
		
		return 0 ;
}
