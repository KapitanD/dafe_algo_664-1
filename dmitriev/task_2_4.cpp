#include <iostream>

int f(int n, int k) {
	return n > 1 ? (f(n - 1, k) + k - 1) % n + 1 : 1;
}

int main(){
	int n, k;
	
	std::cin >> n >> k;
	std::cout << f(n, k);
}