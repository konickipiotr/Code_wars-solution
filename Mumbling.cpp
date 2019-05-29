#include <iostream>
#include <cctype>

class Accumul
{
public:
    static std::string accum(const std::string &s)
    {
        std::string result {};
        for(int i = 0; i<s.length(); i++)
        {
            char upper = toupper(s.at(i));
            result += upper;
            for(int j = 0; j<i; j++)
            {
                result += tolower(s.at(i));
            }
            if(i != s.length()-1)
                result += '-';
        }
        return result;
    }
};

int main()
{
    std::cout<<Accumul::accum("abcd")<<std::endl;
    std::cout<<Accumul::accum("RqaEzty")<<std::endl;
    std::cout<<Accumul::accum("cwAt")<<std::endl;

    std::cout<<Accumul::accum("ZpglnRxqenU")<<std::endl;
    std::cout<<Accumul::accum("NyffsGeyylB")<<std::endl;
    return 0;
}