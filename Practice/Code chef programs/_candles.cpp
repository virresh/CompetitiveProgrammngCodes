#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t,n,i;
	vector<pair<int,int> > v;
	pair<int,int> p;
	vector <int> result;
	cin>>t;
	while(t--)
	{
	    v.clear();
	    result.clear();
	    for(i=0;i<10;i++){cin>>p.first; p.second=i; v.push_back(p);}
	    sort(v.begin(),v.end());
	    if(v[0].second!=0)
        {
            while(v[0].first>=0)
            {
                result.push_back(v[0].second);
                v[0].first--;
            }
        }
        else if(v[0].first!= v[1].first)
        {
            result.push_back(1);
            while(v[0].first>=0)
            {
                result.push_back(v[0].second);
                v[0].first--;
            }
        }
        else
        {
            while(v[1].first>=0)
            {
                result.push_back(v[1].second);
                v[1].first--;
            }
        }
        for(i=0; i<result.size();i++)
        {
            cout<<result[i];
        }
        cout<<"\n";
	}
	return 0;
}
