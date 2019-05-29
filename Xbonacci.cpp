//Tribonacci Sequence
#include <vector>
#include <iostream>

std::vector<int> xbonacci(std::vector<int> signature, int n)
{
    std::vector<int> result;
    if(n == 0) return {};
    if(n < signature.size())
    {
         for(int i = 0; i<n; i++)
            result.push_back(signature.at(i));
        return result;
    }
    result = signature;
    for(int i = signature.size(); i<n; i++)
    {
        int sum = 0;
        for(int j = 1; j<=signature.size(); j++)
        {
            sum += result.at(i-j);
        }
        result.push_back(sum);
    }
   
    return result;
}

int main()
{
    std::vector<int> signature = { 0,0,0,0,1};
    std::vector<int> expected = { 1,2,3,6,11,20,37,68,125,230 };
    std::vector<int> expected2= xbonacci(signature, 10);

    for(auto& i : expected2)
    {
        std::cout<<i<<" ";
    }
    return 0;
}