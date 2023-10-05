#include <iostream>
using namespace std;

int main()
{
    int key;
    int n, m;
    cin >> n >> m >> key;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
             if(a[i][j] == key)
                flag = true;
        }
    }
if(flag){
    cout << "is present :" << key;
}
else{
    cout << "Not Found";
}
}