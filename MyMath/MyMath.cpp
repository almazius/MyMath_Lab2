
#include "MyMath.h"

double MyMath::average(std::vector<double> vec)
{
	return sum(vec) / vec.size();
}

double MyMath::max(std::vector<double> vec)
{
	double maxValue = vec.at(0);
	for (const auto el : vec) {
		if (el > maxValue) {
			maxValue = el;
		}
	}
	return maxValue;
}

double MyMath::min(std::vector<double> vec)
{
	double minValue = vec.at(0);
	for (const auto el : vec) {
		if (el < minValue) {
			minValue = el;
		}
	}
	return minValue;
}

double MyMath::sum(std::vector<double> vec)
{
	double s = 0;
	for (const auto el : vec) {
		s += el;
	}
	return s;
}
