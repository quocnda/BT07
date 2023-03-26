#include<iostream>
using namespace std;
int thu(int l,int r,int x,int * a)
{
    int mid1=(l+r)/2;
    if(a[mid1]==x) {
        return mid1;
    }
    else if(x>a[mid1]) {
        return thu(mid1+1,r,x,a);
    }
    return thu(l,mid1-1,x,a);
}
int main()
{
    int n;
    cin>>n;
    int * a=new int[n+1];

    for(int i=1;i<=n;i++) {
        cin>>a[i];
    }
    int x;
    cin>>x;
    cout<<thu(1,n,x,a);
}