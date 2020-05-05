// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

//struct default to public members
/*struct A{
	int ia;
	int ib;
	int ic;
	
	};*/
	
	//class defaults to private members
class A{
	public:
		int ia;
		int ib;
		int ic;
	
	};
int main()
{
	
	A a = {1,2,3};
	
	printf("ia is %d, \n ib is %d\n, ic is %d\n",a.ia,a.ib,a.ic);
    puts("Done!");
    return 0;
}
