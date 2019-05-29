#include <string>
#include <vector>

class MaxRotate
{
public:
  static long long maxRot(long long n);
};

long long MaxRotate::maxRot(long long n)
{
	std::string str = std::to_string(n);
	std::vector<long long>num;
  	num.push_back(n);
		for (long long i = 0; i < str.length()-1; ++i)
		{
			std::string temp = str.substr(i,1);	
			str += temp;
			str.erase(i, 1);
			long long number = atoll(str.c_str());
			num.push_back(number);		
		}

		long long max = 0;;
		for (long long i = 0; i < num.size(); ++i)
		{
			if (max <= num[i])
				max = num[i];
		}	
	return max;
}