#include<bits/stdc++.h>

/// Define turm
#define nn "\n"
#define ll long long

using namespace std;

int binarySearch(vector<int>& ara,int n,int lookFor)
{
    int low = 0, high = n-1;
    int ans = -1;
    while (low <=high)
    {
        int mid = (low+high)/2;
        if(ara[mid] == lookFor)
        {
            ans = mid, high = mid -1;
        }
        else
        {
            low = mid + 1;
        }

    }
    return ans;
}

void khele_dilam()
{
    int n;
    cin >> n;
    vector<int> ara(n);

    for(int i=0; i<n; i++)
    {
        cin >> ara[i];
    }
    int lookFor;
    cin >> lookFor;

    int result = binarySearch(ara,n,lookFor);

    (result==-1)?cout<< "Not Found the Eelement!" << nn
                     : cout << "Found the Element first index number "<< result << nn;

}





int main()
{

    khele_dilam();


}
