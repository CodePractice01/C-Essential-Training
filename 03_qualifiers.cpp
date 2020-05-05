#include <cstdio>

using namespace std;

class S{
	public:
		int static_value()
		{
			static int x=7;
			return ++x;
		}
	
	};
	
	int func()
	{
		static int x =7;
		return ++x;
	}
 
int main ()
{
		S a ;
		S b;
		S c;
		printf ("a.static_value() is %d\n", a.static_value());
		
		printf ("b.static_value() is %d\n", b.static_value());
		
		printf ("c.static_value() is %d\n", c.static_value());
		return 0 ;
}
