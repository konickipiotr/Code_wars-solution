#include <string>
#include <cctype>
#include <iostream>

std::string to_camel_case(std::string text) 
{

	for (int i = 0; i < text.size(); i++)
	{
		if (isalpha(text.at(0))) {
			continue;
		}
		else if (isblank(text.at(i))) {
			continue;
		}
		else if (text.at(i) == '-' || text.at(i) == '_') {
			text.erase(i, 1);
			i--;
		}
		else if (isblank(text.at(i-1))) {
			text.at(i) = toupper(text.at(i));
		}
		
			
	}
	return text;
}

int main()
{
	std::cout << to_camel_case("some value") << std::endl;
	std::cout << to_camel_case("--the-stealth-warrior") << std::endl;

	system("pause");
    return 0;
}

