#include "middle.h"

int itc_second_max_num(long long num) {
	int idx, i = 0, max = -1, max1 = -1, num1 = num;

	while (num) {
		i++;
		int d = itc_abs(num % 10);
		if (d > max) { 
			max = d;
			idx = i;
		}
		num /= 10;
	}
	i = 0;
	while (num1) {
		i++;
		int d = itc_abs(num1 % 10);
		if (d > max1 && i != idx) max1 = d;
		num1 /= 10;
	}
	return max1;
}
int itc_second_simple_max_num(long long num) {
	int idx, i = 0, max = -1, max1 = -1, num1 = num;

	while (num) {
		i++;
		int d = itc_abs(num % 10);
		if (d > max) {
			max = d;
			idx = i;
		}
		num /= 10;
	}
	i = 0;
	while (num1) {
		i++;
		int d = itc_abs(num1 % 10);
		if (d > max1 && i != idx) max1 = d;
		num1 /= 10;
	}

	if (max1 == max) return -1;
	return max1;
}
long long itc_bin_num(long long number) {
	long long a = 0, zeros = 0, n = number;
	bool isNotFirstZero = false;

	while (number) {
		int t = number % 2;

		if (!isNotFirstZero && t == 0)
			zeros++;
		else
			isNotFirstZero = true;

		a = a * 10 + t;
		number /= 2;
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
long long itc_oct_num(long long number) {
	long long a = 0, zeros = 0, n = number;
	bool isNotFirstZero = false;

	while (number) {
		int t = number % 8;

		if (!isNotFirstZero && t == 0)
			zeros++;
		else
			isNotFirstZero = true;

		a = a * 10 + t;
		number /= 8;
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
int itc_rev_bin_num(long long number) {
	long long a = 0, len = itc_len_num(number);
	for (long long i = 0; number; i++) {
		int t = number % 10;
		a += t * itc_pow(2, i);
		number /= 10;
	}
	return a;
}
int itc_rev_oct_num(long long number) {
	long long a = 0, len = itc_len_num(number);
	for (long long i = 0; number; i++) {
		int t = number % 10;
		a += t * itc_pow(8, i);
		number /= 10;
	}
	return a;
}
