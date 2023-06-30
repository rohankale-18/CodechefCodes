#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n;
        cin >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int l = 0; l < n; l++)
        {
            if (a[l] <= k)
            {
                cout << 1;
                k = k - a[l];
            }
            else
            {
                cout << 0;
            }
            
        }
        cout<<endl;
    }
    return 0;
}
