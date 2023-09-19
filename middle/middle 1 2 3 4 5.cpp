#include "middle.h"
#include "easy.h"

void itc_num_print(long long n) {
	std::cout << n << std::endl;
}
long long  itc_len_num(long long  n) {
	long long  sum = 0;
	n = itc_abs(n);
	while (n > 0) {
		sum++;
		n /= 10;
	}
	return sum;
}
long long  itc_sum_num(long long num) {
	long long  sum = 0;

	num = itc_abs(num);
	
	while (num > 0) {
		sum += num % 10;
		num /= 10;
	}
	return sum;
}
long long itc_multi_num(long long num) {
	long long  sum = 1;
	num = itc_abs(num);
	
	while (num > 0) {
		sum *= num % 10;
		num /= 10;
	}
	return sum;
}
long long  itc_max_num(long long num) {
	long long  max = -1;
	num = itc_abs(num);
	
	while (num > 0) {
		long long  d = num % 10;
		if (d > max) max = d;
		num /= 10;
	}
	return max;
}
