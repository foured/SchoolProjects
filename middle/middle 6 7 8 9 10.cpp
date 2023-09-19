#include "middle.h"
#include "easy.h"


int itc_min_num(long long num) {
	int min = 10;
	//num = itc_abs(num);
	while (num) {
		int d = num % 10;
		if (d < min) min = d;
		num /= 10;
	}
	return min;
}
int itc_rev_num(long long num) {
	long long res = 0;
	//num = itc_abs(num);

	while (num) {
		int d = num % 10;
		res = res * 10 + (d * 10);
		num /= 10;
	}
	res /= 10;
	return itc_sum_num(res);
}
int itc_null_count(long long num) {
	int sum = 0;
	//num = itc_abs(num);
	
	while (num) {
		int d = num % 10;
		if (d == 0)
			sum++;
		num /= 10;
	}
	return sum;
}
bool itc_mirror_count(long long num) {
	//num = itc_abs(num);
	long long num1 = num, res = 0;

	while (num1) {
		int d = num1 % 10;
		res = res * 10 + (d * 10);
		num1 /= 10;
	}
	res /= 10;

	int lenth = itc_len_num(num);
	int hl = (lenth + lenth % 2) / 2;
	for (int i = 0; i < hl; i++) {
		res /= 10;
		num /= 10;
	}
	bool otv = res == num;
	if (res) std::cout << "TRUE" << std::endl;
	else  std::cout << "FALSE" << std::endl;
	return res == num;
}
int itc_second_max_num(long long num) {
	//num = itc_abs(num);
	
	int max = -1, max1 = -1, num1 = num;

	while (num) {
		int d = num % 10;
		if (d > max) max = d;
		num /= 10;
	}
	while (num1 > 0) {
		int d = num1 % 10;
		if (d > max1 && d != max) max1 = d;
		num1 /= 10;
	}
	return max1;
}
