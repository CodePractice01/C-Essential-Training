#include <cstdio>

using namespace std;

constexpr size_t byte= 8;
 
int main ()
{
		long li =  42L;//42L --L sufix ptr long
		
		printf("sizeof Char is %ld bits \n",sizeof(char) * byte);
		
		printf("sizeof Short is %ld bits \n",sizeof(short) * byte);
		
		printf("sizeof int is %ld bits \n",sizeof(int) * byte);
		
		printf("sizeof li is %ld bits \n",sizeof(li) * byte);
		
		printf("sizeof long long is %ld bits \n",sizeof(long long int) * byte);
	
		long long int x = 147LL;
		
		printf("x is %lld\n",x);
		
		return 0 ;
}
