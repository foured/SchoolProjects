#include "middle.h"
#include "easy.h"


long long  itc_covert_num(long long number, long long  ss) {
	number = itc_abs(number);
	long long a = 0, fd = -1;
	while (number > 0) {
		long long  t = number % ss;
		if (fd == -1) fd = t;
		a = a * 10 + t;
		number /= ss;
	}
	long long m = 0;
	while (a)
	{
		m = m * 10 + a % 10;
		a /= 10;
	}
	if (fd == 0) m *= 10;
	return m;
}
long long  itc_rev_covert_num(long long number, long long  ss) {
	number = itc_abs(number);
	long long a = 0, len = itc_len_num(number);
	for (long long i = 0; number > 0; i++) {
		long long  t = number % 10;
		a += t * itc_pow(ss, i);
		number /= 10;
	}
	return a;
}
