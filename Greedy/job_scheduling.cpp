#include<bits/stdc++.h>
#include<map>
using namespace std;
#define ll long long int

bool f(pair<int,int> p1,pair<int,int> p2)
{
	return p1.second<p2.second;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;

	int start[n];
	int end[n];


	for(int i=0;i<n;i++)
	{
		cin>>start[i];
		cin>>end[i];
	}

	vector<pair<int,int>> v;

	for(int i=0;i<n;i++)
	{
		v.push_back(make_pair(start[i],end[i]));
	}

	sort(v.begin(),v.end(),f);

	int time=v[0].second;
	int count=1;

    for(int i=1;i<n;i++)                      
	{
		if(v[i].first>=time)
			{
				time=v[i].second;
				count++;
			}
    }
   
   cout<<endl<<count;
	
}