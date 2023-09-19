#include "middle.h"
#include "easy.h"

long long  itc_second_simple_max_num(long long num) {
	num = itc_abs(num);
	
	long long  max = -1, max1 = -1, num1 = num, i = 0, i2 = 0, idx = 0;

	while (num > 0) {
		i++;
		long long  d = num % 10;
		if (d > max) {
			max = d;
			idx = i;
		}
		num /= 10;
	}
	while (num1 > 0) {
		i2++;
		long long  d = num1 % 10;
		if (i2 != idx && max1 < d) max1 = d;
		num1 /= 10;
	}
	if (max1 == max) return -1;
	else return max1;
}
long long itc_bin_num(long long number) {
	number = itc_abs(number);
	
	long long a = 0, fd = -1;
	while (number > 0) {
		long long  t = number % 2;
		if (fd == -1) fd = t;
		a = a * 10 + t;
		number /= 2;
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
long long itc_oct_num(long long number) {
	number = itc_abs(number);
	long long a = 0, fd = -1;
	while (number > 0) {
		long long  t = number % 8;
		if (fd == -1) fd = t;
		a = a * 10 + t;
		number /= 8;
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
long long  itc_rev_bin_num(long long number) {
	number = itc_abs(number);
	long long a = 0, len = itc_len_num(number);
	for (long long i = 0; number > 0; i++) {
		long long  t = number % 10;
		a += t * itc_pow(2, i);
		number /= 10;
	}
	return a;
}
long long  itc_rev_oct_num(long long number) {
	number = itc_abs(number);
	long long a = 0, len = itc_len_num(number);
	for (long long i = 0; number > 0; i++) {
		long long  t = number % 10;
		a += t * itc_pow(8, i);
		number /= 10;
	}
	return a;
}
