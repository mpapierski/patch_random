#if !defined(PATCH_RANDOM_INCLUDE_)
#define PATCH_RANDOM_INCLUDE_

#if defined(__cplusplus)
extern "C" {
#	define PATCH_RANDOM_NEEDS_THROW throw()
#else
#	define PATCH_RANDOM_NEEDS_THROW
#endif


void srand(unsigned int seed) PATCH_RANDOM_NEEDS_THROW ;
int rand() PATCH_RANDOM_NEEDS_THROW ;

#if defined(__cplusplus)
}
#endif

#endif /* PATCH_RANDOM_INCLUDE_ */