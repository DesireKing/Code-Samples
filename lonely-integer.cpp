#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int lonely_integer(int a[], int n) 
{
    int lonely;
    int *count = new int[n];
    for(int x = 0; x < n; x++)
    {
    	count[x] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count[i] = count[i] + 1;
            }
        }
    }
    for (int k = 0; k < n; k++)
    {
        if(count[k] == 2)
        {
            lonely = a[k];
            break;
        }
        else lonely = 0;
    }
    return lonely;
}

int main(){
    int n, *a;
    cin >> n;
    a = new int[n];
    for(int i = 0; i < n; i++)
    {
       cin >> a[i];
    }
    cout << lonely_integer(a,n) << endl;
    return 0;
}
