#include <iostream>

int nod(int a, int b){
	if (b == 0)
		return a;
	return nod(b, a%b);
}

int main(){
	int a, b, c, d, m, n;

	std::cin >> a >> b >> c >> d;

	m = (a * d + c * b);
	n = (b * d);

	int nd = nod(m, n);
	std::cout << m / nd << ' ' << n / nd;
}
