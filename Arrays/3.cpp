// finding kth smallest integer in  the array
//  dutch national flag algo
#include <iostream>
using namespace std;
void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int s = 0;
    int m = 0;
    int e = n - 1;
    while (m <= e)
    {
        if (arr[m] == 0)
        {
            swap(arr, s, m);
            s++;
            m++;
        }
        else if (arr[m] == 1)
        {
            m++;
        }
        else
        {
            swap(arr, m, e);
            e--;
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;

    return 0;
}
