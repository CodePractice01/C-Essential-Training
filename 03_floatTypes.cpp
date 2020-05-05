#include <cstdio>
using namespace std;

constexpr size_t byte= 8;
 
int main ()
{
		float f;
		double df;
		long double ldf;
		
		printf("sizeof float is %ld bits \n",sizeof(f) * byte);
		
		printf("sizeof double float df is %ld bits \n",sizeof(df) * byte);
		
		printf("sizeof long double ldf is %ld bits \n",sizeof(ldf) * byte);
		
		f = 500.0;
		printf("f is %f\n",f);
		
		return 0 ;
}
