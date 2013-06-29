// Note that we are using only standard libraries here
#include <cstdlib>
#include <cstdio>

int
main(int argc, char * argv[])
{
	// And even std namespace!
	::std::srand(0);
	for (int i = 0; i < 100; i++)
	{
		std::printf("%u\n", static_cast<unsigned int>(::std::rand()));
	}
	return 0;
}