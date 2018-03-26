
#include <inc/lib.h>

void
exit(void)
{
	close_all();		//comment this line to run pingpong, primes and forktree after merging lab5 with lab4 branch.
	sys_env_destroy(0);
}

