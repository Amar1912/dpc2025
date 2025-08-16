#include <iostream>
#include <vector>
using namespace std;

int missNo(vector<int> &array)
{
    int n = array.size() + 1;
    int totalSum = (n * (n + 1)) / 2;

    int arraySum = 0;
    for (int i = 0; i < array.size(); i++)
    {
        arraySum += array[i];
    }

    return totalSum - arraySum;
}

int main()
{
    vector<int> array = {1, 2, 7, 3, 4, 5};
    cout << "Missing No = " << missNo(array);

    return 0;
}
