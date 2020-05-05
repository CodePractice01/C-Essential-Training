#include <cstdio>

using namespace std;

void func()
{
	static int i = 5;
	printf("i =  %d\n ", ++i);
	
}

int main()
{
	
		puts ("this is main()");
		func();
		func();
		func();
		
		return 0;
}

