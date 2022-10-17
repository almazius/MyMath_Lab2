#include <iostream>
#include <string>
#include "MyMath.h"

int main() {
	std::vector<double> vec;
	std::cout << "Write value (for stop enter \"s\"):\n";
	std::string temp;
	while (true) {
		std::cin >> temp;
		if (temp == "s" || temp == "S") {
			break;
		}
		else {
			try
			{
				vec.push_back(std::stod(temp));
			}
			catch (const std::invalid_argument) 
			{
				std::cout << "Invalide value\n";
			}
			catch (const std::exception& e)
			{
				std::cout << e.what();
			}
		}
	}

	try
	{
		std::cout << "Average value:\t" << MyMath::average(vec);
		std::cout << "\nMin value:\t" << MyMath::min(vec);
		std::cout << "\nMax value:\t" << MyMath::max(vec);
		std::cout << "\nSum:\t\t " << MyMath::sum(vec);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what();
	}
	
}