patch_random
===============

This library allows you to replace original `void srand(unsigned int)` and `int rand()`. As the name suggest the original `srand` and `rand` functions from standard library are patched at the link time with a *Mersenne Twister* pseudo-random number generator!

No code change required. Just link your app to this library and your app will be producing *better* pseudorandom numbers!

Example
-------

Consider this code (for the sake of this simple example we will always seed it with 0):

	#include <stdlib.h>
	#include <stdio.h>
	
	int main(int argc, char * argv)
	{
		int i;
		srand(0);
		for (i = 0; i < 10; i++)
		{
			printf("%u\n", rand());
		}
		return 0;
	}

When you run this code it will print:

	1804289383
	846930886
	1681692777
	1714636915
	1957747793
	424238335
	719885386
	1649760492
	596516649
	1189641421

These pseudorandom numbers are bad.

But when you link this app to the `patch_random` library it will print better pseudorandom numbers:

	357136044
	2546248239
	3071714933
	3626093760
	2588848963
	3684848379
	2340255427
	3638918503
	1819583497
	2678185683
	2774094101

Can you see the difference?

TODO
----

1. patch *patched* `rand()` method for mocking.

License
-------

This library is distributed under the terms of the [Boost Software License](http://www.boost.org/LICENSE_1_0.txt).

Author
------

Michał Papierski <michal@papierski.net>