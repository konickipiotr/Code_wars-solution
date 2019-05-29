#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>

std::string highestScoringWord(const std::string &str)
{
    std::istringstream ss(str);
    std::string word;
    int hightesVal = 0;
    std::string highestWord {};
    while(ss >> word)
    {
        int currentVal = 0;
        std::transform(std::begin(word), std::end(word), std::begin(word), ::tolower);
        for(const auto& letter : word)
            currentVal += (static_cast<int>(letter) - 96);


        if(currentVal>hightesVal)
        {
            hightesVal = currentVal;
            highestWord = word;
        }
    }
  return highestWord;
}

/*
Given a string of words, you need to find the highest scoring word.
Each letter of a word scores points according to its position in the alphabet: a = 1, b = 2, c = 3 etc.
You need to return the highest scoring word as a string.
If two words score the same, return the word that appears earliest in the original string.
All letters will be lowercase and all inputs will be valid.
*/

int main()
{
    

    std::cout<<highestScoringWord("man i need a taxi up to ubud")<<std::endl;
    std::cout<<highestScoringWord("what time are we climbing up the volcano")<<std::endl;
    std::cout<<highestScoringWord("take me to semynak")<<std::endl;
    std::cout<<highestScoringWord("massage yes massage yes massage")<<std::endl;
    std::cout<<highestScoringWord("take two bintang and a dance please")<<std::endl;
    return 0;
}