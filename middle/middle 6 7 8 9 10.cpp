#include "middle.h"


int itc_min_num(long long num) {
	int min = 10;
	if (num == 0) return 1;
	while (num) {
		int d = itc_abs(num % 10);
		if (d < min) min = d;
		num /= 10;
	}
	return min;
}
int itc_rev_num(long long num) {
	long long res = 0;

	while (num) {
		int d = num % 10;
		res = res * 10 + (d * 10);
		num /= 10;
	}
	res /= 10;
	return itc_len_num(res);
}
int itc_null_count(long long num) {
	int sum = 0;
	if (num == 0) return 1;

	while (num) {
		int d = itc_abs(num % 10);
		if (d == 0)
			sum++;
		num /= 10;
	}
	return sum;
}
bool itc_mirror_num(long long num) {
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
	//if (otv) std::cout << "TRUE" << std::endl;
	//else  std::cout << "FALSE" << std::endl;
	return otv;
}
int itc_mirror_count(long long num) {
	int n = 0;
	if (num > 0) {
		for (int i = 1; i < num; i++) {
			n += itc_mirror_num(i);
		}
	}
	else {
		for (int i = 1; i > num; i--) {
			n += itc_mirror_num(i);
		}
	}
	return n;
}