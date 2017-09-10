#include <iostream>

int main(){
	int n;

	std::cin >> n;

	for (int i = 2; i*i <= n; i++){
		if (n % i == 0){
			std::cout << n / i << ' ' << n - (n / i);
			return 0;
		}
	}
	std::cout << 1 << ' ' << n - 1;
}
