#include <iostream>
#include <string>
#include "MyMath.h"
#include <signal.h>

bool signalCode = true;

void changeSignalCode(int signum) {
	signalCode = false;
}

// создать глобальную переменную и через колбек ее менять
int main() {
	std::vector<double> vec;
	std::cout << "Write value (for stop enter \"s\"):\n";
	std::string temp;
	signal(SIGINT, changeSignalCode);
	while (signalCode) {
		std::cin >> temp;
		if (temp == "s" || temp == "S" || std::cin.eof()) 
		{
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