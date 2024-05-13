// record breaking day
#include "bits/stdc++.h"
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n+1];// take the size of array greater by 1 so that last element could also be comapred to the following value
    a[n]=-1;// to always satisfy the condition of a[n-1] always greater than a[n]
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if (n==1){// if size is 1 
        return 1;
    }
    int ans=0;// initialize the result to be zero
    int mx=-1;// initialize the previous element to be negative
    for(int i=0;i<n;i++){
        if (a[i]>mx && a[i]>a[i+1]){// comparison of a[i] with previous and following value
            ans++;// increment the result count
        }
        mx=max(mx,a[i]);// cal the maximum among a[i] and previous value
    }
    cout<<ans<<endl;// return the count

    return 0;
}
