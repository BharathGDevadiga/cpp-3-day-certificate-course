#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence = "I am learning C++";
    int wordCount = 1;

    for(int i=0; i<sentence.length(); i++)
    {
        if(sentence[i] == ' '){
          
            wordCount++;
        }
    }

    cout << "Number of words: " << wordCount;
    return 0;
}
