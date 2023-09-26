#include "middle.h"

int itc_covert_num(long long number, int ss) {
	long long a = 0, zeros = 0, n = number;
	bool isNotFirstZero = false;

	while (number) {
		int t = number % ss;

		if (!isNotFirstZero && t == 0)
			zeros++;
		else
			isNotFirstZero = true;

		a = a * 10 + t;
		number /= ss;
	}
	long long m = 0;
	while (a)
	{
		m = m * 10 + a % 10;
		a /= 10;
	}

	for (int i = 0; i < zeros; i++) {
		m *= 10;
	}

	return m;
}
int itc_rev_covert_num(long long number, int ss) {
	long long a = 0, len = itc_len_num(number);
	for (long long i = 0; number; i++) {
		int t = number % 10;
		a += t * itc_pow(ss, i);
		number /= 10;
	}
	return a;
}
