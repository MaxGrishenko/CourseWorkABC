#include <stdio.h>

int main() {
	uint64_t a = 1;
	uint64_t b = 2;
	uint64_t c;
	asm volatile("aes64esm %[d], %[s], %[t]\n\t" : [d] "=r" (c) : [s] "r" (a), [t] "r" (b));
}
