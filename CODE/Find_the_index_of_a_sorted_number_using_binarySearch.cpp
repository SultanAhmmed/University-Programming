#include<bits/stdc++.h>

/// Define turm
#define nn "\n"
#define ll long long

using namespace std;

int binarySearch(vector<int>& ara,int n,int lookFor)
{
    int low = 0, high = n-1;
    while (low <=high){
        int mid = (low+high)/2;
        if(ara[mid] == lookFor){
            return mid;
        }
        else if(ara[mid] < lookFor){
            low = mid+1;
        }
        else{
            high = mid - 1;
        }

    }
    return -1;
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
                : cout << "Found the Element on "<< result << " index number!" << nn;

}





int main()
{

    khele_dilam();


}
