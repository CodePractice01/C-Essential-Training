#include <cstdio>

using namespace std;


//this function return a reference to an integer
// and it takes as its argument a reference
int & f(int &i)
{
	return ++i;
	
}

//case 2 constant referente

const int & ff(const int & i)
{
		int _i = i; // define local i
		return ++_i;
}
	
	
int main ()
{
		int  i =5;
		int & ir =i;
		ir=10;
		 
		puts("i Values: ");
		
		printf("i is %d\n",i); //r: 10
		
		printf("i from f() is %d\n",f(i)); //r: 11
		printf("i is %d\n",i); //after called reference function , value of i is changed >> r : 11
		
		
		//case 2
		printf("i from f() is %d\n",f(i) = 42); //r: 42
		printf("i from f() is %d\n\n",i); //r:42
		
		//case call constant reference function
		printf("i from ff() is %d\n",ff(i)); //r: 43
		printf("i from ff() is %d\n",i); //r:43
		
		return 0;
	
}

