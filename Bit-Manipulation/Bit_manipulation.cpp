#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll n;
	cin>>n;
	int ans=0;

	while(n)
	{
      if(n&1)
         ans++;

      n=n>>1;
	}

   // ans=__builtin_popcount(n);
	cout<<ans<<endl;
}