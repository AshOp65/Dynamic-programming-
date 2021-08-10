#include <bits/stdc++.h>
using namespace std;
int arr[100009];
int t[100009];
int n;
int frog(int i)
{
    if (i == n - 1)
        return 0;
    if (t[i] != -1)
        return t[i];
    int ans = frog(i + 1) + abs(arr[i + 1] - arr[i]);
    if (i + 2 < n)
        ans = min(ans, frog(i + 2) + abs(arr[i + 2] - arr[i]));
    return t[i] = ans;
}
int main()
{
    memset(t, -1, sizeof(t));
    //int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << frog(0) << endl;
    return 0;
}