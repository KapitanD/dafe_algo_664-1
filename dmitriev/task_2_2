#include <iostream>

struct Point{
	double x = 0., y = 0.;
};

int main(){
	int n;
	Point points[1013];

	std::cin >> n;

	for (int i = 0; i < n; i++){
		std::cin >> points[i].x >> points[i].y;
	}

	double s = 0.;

	for (int i = 1; i < n; i++){
		s += (points[i].x - points[i - 1].x)*(points[i].y + points[i - 1].y) / 2;
	}
	s += (points[0].x - points[n - 1].x)*(points[0].y + points[n - 1].y) / 2;

	std::cout << s;
}
