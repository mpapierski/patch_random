#if !defined(PATCH_RANDOM_INCLUDE_)
#define PATCH_RANDOM_INCLUDE_

#if defined(__cplusplus)
extern "C" {
#else
#endif

void srand(unsigned int seed) throw ();
int rand() throw ();

#if defined(__cplusplus)
}
#endif

#endif /* PATCH_RANDOM_INCLUDE_ */