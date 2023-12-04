#include <iostream>

void p_swap(int* parr, int size) {
	for (int i = 0; i < size; parr++, i++) {
		if (i % 2 != 0)
		{
			int tmp = *parr;
			*parr = *(parr - 1);
			*(parr - 1) = tmp;
		}
	}
}

void step(int* pn,  int m) {
	int res = 1;
	for (int i = 0; i < m; i++) {
		res *= *pn;
	}
	std::cout << "Результат: " << res << std::endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	const int size = 10;
	int arr[size] = {2,5,8,3,6,41,11,14,7,15};
	int *parr;
	parr = &arr[0];
	for (int i = 0; i < size; i++) {
		std::cout << *(parr + i) << " ";
	}
	std::cout << std::endl;
	std::cout << "\n\n";
	
	p_swap(parr, size);
	
	for (int i = 0; i < size; i++) {
		std::cout << *(parr + i) << " ";
	}
	std::cout << std::endl;


	int n;
	std::cout << "Введите n: \n";
	int const m = 2
		;
	int* pn;
	pn = &n;
	std::cin >> n;
	step(&n, m);

	return 0;
}