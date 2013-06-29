#include "patch_random/patch_random.hpp"
#include <boost/random/mersenne_twister.hpp>

// Global mersenne twister object
static boost::mt19937 g_mersenne_twister;

void srand(unsigned int seed)
{
	g_mersenne_twister.seed(seed);
}

int
rand()
{
	return g_mersenne_twister();
}
