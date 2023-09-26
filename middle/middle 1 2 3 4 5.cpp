#include "middle.h"

void itc_num_print(int n) {
	std::cout << n << std::endl;
}
int itc_len_num(int n) {
	int sum = 0;
	if (n == 0) return 1;
	while (n) {
		sum++;
		n /= 10;
	}
	return sum;
}
int itc_sum_num(long long num) {
	int sum = 0;

	while (num) {
		sum += num % 10;
		num /= 10;
	}
	return itc_abs(sum);
}
long long itc_multi_num(long long num) {
	int sum = 1;
	
	while (num) {
		sum *= num % 10;
		num /= 10;
	}
	return itc_abs(sum);
}
int itc_max_num(long long num) {
	int max = -1;
	if (num == 0) return 0;
	while (num) {
		int d = itc_abs(num % 10);
		if (d > max) max = d;
		num /= 10;
	}
	return max;
}
