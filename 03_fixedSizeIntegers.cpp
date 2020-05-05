#include <cstdio>
#include <cstdint>
using namespace std;

constexpr size_t byte= 8;
 
int main ()
{
		
		printf("sizeof int8_t is %ld bits \n",sizeof(uint8_t) * byte);
		
		printf("sizeof int16_t is %ld bits \n",sizeof(int16_t) * byte);
		
		printf("sizeof int32_t is %ld bits \n",sizeof(int32_t) * byte);
		
		printf("sizeof int64_t is %ld bits \n",sizeof(int64_t) * byte);
		

		
		return 0 ;
}