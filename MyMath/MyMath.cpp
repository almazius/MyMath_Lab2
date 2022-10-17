#include "MyMath.h"

double MyMath::average(const std::vector<double> &vec)
{

	if (vec.empty()) {
		throw std::invalid_argument("Vector empty!");
	}
	return sum(vec) / vec.size();
}

double MyMath::max(const std::vector<double> &vec)
{
	if (vec.empty()) {
		throw std::invalid_argument("Vector empty!");
	}
	auto maxValue = vec.at(0);
	for (const auto& el : vec) {
		if (el > maxValue) {
			maxValue = el;
		}
	}
	return maxValue;
}

double MyMath::min(const std::vector<double> &vec)
{
	if (vec.empty()) {
		throw std::invalid_argument("Vector empty!");
	}
	auto minValue = vec.at(0);
	for (const auto& el : vec) {
		if (el < minValue) {
			minValue = el;
		}
	}
	return minValue;
}

double MyMath::sum(const std::vector<double> &vec)
{
	if (vec.empty()) {
		throw std::invalid_argument("Vector empty!");
	}
	double s = 0;
	for (const auto& el : vec) {
		s += el;
	}
	return s;
}
