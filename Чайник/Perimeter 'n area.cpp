//#include <iostream>
//#include <math.h>
//
//struct Point {
//	int x;
//	int y;
//};
//
//double distance(Point p1, Point p2)
//{
//	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
//}
//
//double perimeter(double p1, double p2, double p3)
//{
//	return p1 + p2 + p3;
//}
//double perimeter(Point p1, Point p2, Point p3)
//{
//	return distance(p1, p2) + distance(p2, p3) + distance(p1, p3);
//}
//
//double area(Point p1, Point p2, Point p3)
//{
//	double per = perimeter(p1, p2, p3) / 2.0;
//	double a = distance(p1, p2);
//	double b = distance(p2, p3);
//	double c = distance(p1, p3);
//	return sqrt(per * (per - a) * (per - b) * (per - c));
//}
//
//int main()
//{
//	Point a = {0, 0};
//	Point b = {0, 4};
//	Point c = {3, 0};
//
//	std::cout << "Triangle perimeter: " << perimeter(a, b, c) << std::endl;
//
//	std::cout << "Triangle area: " << area(a, b, c);
//	return 0;
//}