#pragma once
#include <vector>
#include <stdexcept>

class MyMath
{
public:
	static double average(const std::vector<double> &vec);
	static double max(const std::vector<double> &vec);
	static double min(const std::vector<double> &vec);
	static double sum(const std::vector<double> &vec);
};
