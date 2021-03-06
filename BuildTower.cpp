#include <iostream>
#include <string>
#include <vector>

class Kata {
public: 
	std::vector<std::string> towerBuilder(int nFloors) {

		std::vector < std::string> result;
		std::string star = "*";
		std::string empty = ".";
		int gwiazdki = 1;

		for (int i = 1; i <nFloors ; i++) {
			std::string x = "";
			int ilePustych = nFloors - i;
			int krance = ilePustych / 2;
			
			for (int j = 0 ; j < krance; j++)
				x += empty;

			for (int j =  0; j < gwiazdki; j++)
				x += star;

			for (int j = 0; j < krance; j++)
				x += empty;

			result.push_back(x);
			gwiazdki += 2;
		}
		return result;
	}
};
int main()
{
	Kata k;
	std::vector<std::string> vek = k.towerBuilder(12);
	for (auto & v : vek) {
		std::cout << v << std::endl;
	}
	system("pause");
    return 0;
}

