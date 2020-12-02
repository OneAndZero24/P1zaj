//Jan Miksa
#include <random>

using namespace std;

int main()
{
	random_device r;
	default_random_engine e(r());

	uniform_int_distribution<int> uniform_dist(1, 6);
	return uniform_dist(e);	
}