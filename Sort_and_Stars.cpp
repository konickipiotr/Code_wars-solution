std::string twoSort(std::vector<std::string> s)
{

	std::string result;
	std::string stars = "***";

	std::sort(s.begin(), s.end());

	result = s.at(0);
	int size = result.size()-1;
	int x = 1;

	for (int i = 0; i < size; ++i)
	{	
		result.insert(x, "***");
		x += stars.length()+1;
	}

	return result;
}