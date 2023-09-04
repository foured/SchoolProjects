#include "easy.h"

void itc_name() {
	std::cout << "Ivan" << std::endl;
}
void itc_fio() {
	std::cout << "Toporov Ivan Mihailovich" << std::endl;
}
int itc_abs(int num) {
	return num > 0 ? num : -num;
}
double itc_fabs(double num) {
	return num > 0 ? num : -num;
}
int itc_revnbr(int num) {
	int t = 0;
	t += num % 10 * 100;
	t += (num - (num % 10)) % 100;
	t += ((num - (num % 10)) / 100 % 10);
	return t;
}
bool itc_iseven(int num) {
	return num % 2 == 0;
}
int itc_max(int num1, int num2) {
	return num1 > num2 ? num1 : num2;
}
int itc_min(int num1, int num2) {
	return num1 < num2 ? num1 : num2;
}
double itc_fmax(double num1, double num2) {
	return num1 > num2 ? num1 : num2;
}
double itc_fmin(double num1, double num2) {
	return num1 < num2 ? num1 : num2;
}
int itc_sqrt(int num) {
	int t = -1;
	for (int i = 0; i < num; i++) {
		if (i * i == num) {
			t = i;
			break;
		}
	}
	return t;
}
int itc_skv(int num) {
	return num > 0 ? num * num : -1;
}
int itc_spr(int num1, int num2) {
	return num1 > 0 && num2 > 0 ? num1 * num2 : -1;
}
int itc_str(int num1, int num2, int num3) {
	if (num1 > 0 && num2 > 0 && num3 > 0) {
		int p = (num1 + num2 + num3) / 2;
		int ss = p * (p - num1) * (p - num2) * (p - num3);
		return itc_sqrt(ss);
	}
	else {
		return -1;
	}
}
double itc_scir(int r) {
	if (r > 0) {
		return 3.14 * r * r;
	}
	else {
		return -1;
	}
}
double itc_pow(int num, int step) {
	int s = 1;
	for (int i = 0; i < step; i++) {
		s *= num;
	}
	return s;
}
bool itc_ispositive(int num) {
	return num >= 0;
}
bool itc_ispositive_d(double num) {
	return num >= 0;
}