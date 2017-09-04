#include <iostream>
#include <algorithm>

int fact(int n, int k){
    int p = 0;
    while( n ){
        n /= k;
        p += n;
    }
	return p;
}

int main(){
	int n;
    std::cin >> n;
    int p2 = fact(n, 2);
    int p5 = fact(n, 5);
    std::cout << std::min(p2, p5);
}
