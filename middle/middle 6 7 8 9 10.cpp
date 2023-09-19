#include "middle.h"
#include "easy.h"


long long  itc_min_num(long long num) {
	long long  min = 10;
	num = itc_abs(num);
	while (num > 0) {
		long long  d = num % 10;
		if (d < min) min = d;
		num /= 10;
	}
	return min;
}
long long  itc_rev_num(long long num) {
	long long res = 0;
	num = itc_abs(num);

	while (num > 0) {
		long long  d = num % 10;
		res = res * 10 + (d * 10);
		num /= 10;
	}
	res /= 10;
	return itc_sum_num(res);
}
long long  itc_null_count(long long num) {
	long long  sum = 0;
	num = itc_abs(num);
	
	while (num > 0) {
		long long  d = num % 10;
		if (d == 0)
			sum++;
		num /= 10;
	}
	return sum;
}
bool itc_mirror_count(long long num) {
	num = itc_abs(num);
	long long num1 = num, res = 0;

	while (num1 > 0) {
		long long  d = num1 % 10;
		res = res * 10 + (d * 10);
		num1 /= 10;
	}
	res /= 10;

	long long  lenth = itc_len_num(num);
	long long  hl = (lenth + lenth % 2) / 2;
	for (long long  i = 0; i < hl; i++) {
		res /= 10;
		num /= 10;
	}
	bool otv = res == num;
	if (res) std::cout << "TRUE" << std::endl;
	else  std::cout << "FALSE" << std::endl;
	return res == num;
}
long long  itc_second_max_num(long long num) {
	num = itc_abs(num);
	
	long long  max = -1, max1 = -1, num1 = num;

	while (num > 0) {
		long long  d = num % 10;
		if (d > max) max = d;
		num /= 10;
	}
	while (num1 > 0) {
		long long  d = num1 % 10;
		if (d > max1 && d != max) max1 = d;
		num1 /= 10;
	}
	return max1;
}
