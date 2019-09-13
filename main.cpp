#include <iostream>


using namespace std;

const int MOD =1000000007;

long long noofways(int n,int k, int x )
{
  long long b[n],a[n];

    a[0]=x==1?1:0;
    b[0]=x==1?0:1;
     for(int y=1;y<n;++y)
       {
           a[y]=b[y-1]%MOD;
           b[y]=(a[y-1]*(k-1)+b[y-1]*(k-2))%MOD;
       }
    return a[n-1];

}

int main()
{
    int n,k,x;
    cin>>n>>k>>x;
    cout<<noofways(n,k,x);


    return 0;
  //creating a sub branch//
}
