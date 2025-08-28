#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;

    for (int i = 0; i < testcase; i++)
    {
        int arraySize;
        cin >> arraySize;
        int integerArray[arraySize];

        for (int i = 0; i < arraySize; i++)
        {
            cin >> integerArray[i];
        }

        sort(integerArray, integerArray + arraySize);

        int minimumElement = integerArray[0];
        int maximumElement = integerArray[arraySize - 1];

        if (minimumElement % 2 == 0 && maximumElement % 2 == 0)
        {
            cout << 0 << endl;
        }
        else if (minimumElement % 2 == 1 && maximumElement % 2 == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            int i = 0, countFirstOperation = 0;

            while (integerArray[i] % 2 != maximumElement % 2)
            {
                i++;
                countFirstOperation++;
            }

            int j = arraySize - 1, countSecondOperation = 0;
            while (integerArray[j] % 2 != minimumElement % 2)
            {
                j--;
                countSecondOperation++;
            }

            cout << min(countFirstOperation, countSecondOperation) << endl;
        }
    }

    return 0;
}