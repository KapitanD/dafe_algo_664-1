#include <iostream>

int main(){
	int n, m, k, a[100013], b[100013];

	std::cin >> n;
	for (int i = 0; i < n; i++)
		std::cin >> a[i];

	std::cin >> m;
	for (int i = 0; i < m; i++)
		std::cin >> b[i];

	std::cin >> k;

	for (int i = 0; i < n; i++){
		a[i] = k - a[i];
	}

	int j = 0, s = 0;
	for (int i = m - 1; i >= 0 && j < n; i--){
		while (b[i] < a[j]){
			j++;
		}
		if (b[i] == a[j]){
			s++;
			j++;
		}
	}
	std::cout << s;
}