#include<iostream>
#define  ll long long
#define sz 10001
using namespace std;

ll a[sz]={0},b[sz]={0},c[sz]={0};
ll sum;
void precompute(ll n,ll sum)
{
    a[0]=0;b[0]=sum;

      for(ll i=1; i<n;i++)
      {
        a[i]=a[i-1]+c[i-1];
        b[i]=sum-a[i]-c[i];
      }
}
int main()
{
    ll n,q;
    cin>>n>>q;
    ll i; sum=0;
    for(i=0;i<n;i++)
    {
        cin>>c[i];
        sum+=c[i];
    }
    precompute(n,sum);
    ll s,e;
    while(q--)
    {
        cin>>s>>e;
        cout<<a[s-1]+b[e-1]<<"\n";
    }
    return 0;
}
