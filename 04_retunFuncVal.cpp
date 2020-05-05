#include <cstdio>
#include <string>

using namespace std;

const string & func()
{
		const static string s = "This is func()";
		return s;
}

int main()
{
	
		puts("this is main()");
		
		const string & s = func();
		printf("func() returns %s\n",s.c_str() );//#include <cstdio>
	return 0;
}



