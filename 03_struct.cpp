#include <cstdio>

using namespace std;

struct Employee
{
	int id;
	const char * name;
	const char * role;
};

int main()
{
		Employee joe = {42, "Joe","Bpss"};
		Employee *e = &joe;
		
		printf("%s is the %s and has id %d\n\n\n",joe.name, joe.role, joe.id);
		
		printf("%s is the %s and has id %d\n",e->name, e->role, e->id);
		
		return 0;
	
}
