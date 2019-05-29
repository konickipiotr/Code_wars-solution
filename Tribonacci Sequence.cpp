//Tribonacci Sequence
#include <vector>
#include <iostream>

std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    std::vector<int> result;
    if(n == 0) return {};
    if(n < 3)
    {
         for(int i = 0; i<n; i++)
            result.push_back(signature.at(i));
        return result;
    }
    result = signature;
    for(int i = 3; i<n; i++)
    {
        int sum = result.at(i-3) + result.at(i-2) + result.at(i-1);
        result.push_back(sum);
    }
   
    return result;
}

int main()
{
    std::vector<int> signature = { 1,2,3 };
    std::vector<int> expected = { 1,2,3,6,11,20,37,68,125,230 };
    std::vector<int> expected2= tribonacci(signature, 10);

    for(auto& i : expected2)
    {
        std::cout<<i<<" ";
    }
    return 0;
}