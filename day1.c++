#include<iostream>
using namespace std;
void sort(int array[], int n)
{
    int lowpt = 0, midpt = 0, highpt = n - 1;
    while (midpt <= highpt)
    {
        if (array[midpt] == 0)
        {
            swap(array[lowpt], array[midpt]);
            lowpt++;
            midpt++;
        }
        else if (array[midpt] == 1)
        {
            midpt++;
        }
        else
        {
            swap(array[midpt], array[highpt]);
            highpt--;
        }
    }
}
int main()
{
    int array[]={0,1,2,1,2,0,0,0,1};
    int n = sizeof(array)/sizeof(array[0]);
    sort(array, n);
    cout<<"Final sorted array :-"<<endl;

    for (int i = 0; i < n; i++){
        cout<< array[i]<<" ";
    }
    
    return 0;
}
