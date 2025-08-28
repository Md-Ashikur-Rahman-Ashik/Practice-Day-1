#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;

    for (int i = 0; i < testcase; i++)
    {
        int arraySize, countOne = 0;
        cin >> arraySize;
        
        string inputString;
        cin >> inputString;

        for(char inputChar : inputString){
            if(inputChar == '1'){
                countOne++;
            }
        }
        

        int finalCount = 0;

        for (int i = 0; i < arraySize; i++)
        {
            if (inputString[i] == '0')
            {
                finalCount = finalCount + (countOne + 1);
            }
            else if(inputString[i] == '1')
            {
                finalCount = finalCount + (countOne - 1);
            }
        }

        cout << finalCount << endl;
    }

    return 0;
}