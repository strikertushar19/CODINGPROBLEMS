// find frequency of an number in an array do not repeat numbers at their own position.
#include <bits/stdc++.h>
using namespace std;
const int maxsize = 100;
void frequency(int arr[], int n)
{
    int i = 0;

    int freq = 1;

    int freq_arr[maxsize + 1] = {0};

    for (i = 0; i < n; i++)
    {
        freq_arr[arr[i]]++;
    }
    for (i = 0; i <= maxsize; i++)
    {
        if (freq_arr[i] > 0)
        {
            cout << "Number " << i << " occurs " << freq_arr[i] << " times" << endl;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 1, 2, 3, 3, 45, 56, 45, 56, 16, 100, 34, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "frequency for every number present in it is \n";
    frequency(arr, n);
    return 0;
}