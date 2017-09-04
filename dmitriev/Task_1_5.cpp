#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int p = 1, c = 3;
    for(int i = 1; i <= n; i++){
        std::cout << p << ' ';
        p += c;
        c += 2;
    }
}

