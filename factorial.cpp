#include <iostream>

long my_fibo(int num)
{
	if (num == 0 || num == 1) {
		return num;
	}

	long num1 = 0;
	long num2 = 1;
	long sum = 0;

	while (num) {
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		--num;
	}

	return num1;
}

long long foo(int num)
{
	if (num < 0) {
		return -1;
	} else if (num == 0 || num == 1) {
		return num;
	}

	int res = 1;

	while (num) {
		res *= num;
		--num;
	}

	return res;
}

int main()
{
	int num = 0;
	
	std::cin >> num;
	std::cout << foo(num) << std::endl;
	std::cout << fibonachi(num) << std::endl;

	return 0;
}

