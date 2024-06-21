#include <iostream>
#include <string>
using namespace std;
unsigned int strCount(const std::string& word, char letter);

int main()
{
 cout << strCount("",'z') <<endl;
    return 0;
}

unsigned int strCount(const std::string& word, char letter){
    
    if(word.empty()) return 0;
    
        int occur = 0;
        for(char str : word)
        {
            if(str == letter) occur++;
        }
    return occur;
    
}
