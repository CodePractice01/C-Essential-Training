#include <cstdio>
#include <string>

using namespace std;

void func()
{
	puts("This is func()");
}

int main()
{
		void(*pfunc)() = func;
		puts("this is main()");
		
		pfunc();
	return 0;
}



