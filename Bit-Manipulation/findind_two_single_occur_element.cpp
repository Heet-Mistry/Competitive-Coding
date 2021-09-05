#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ll n;
	cin>>n;

	ll k= (2*n)+2;

	ll arr[k];

	int Xor=0;

    for(int i=0;i<k;i++)
    {
    	cin>>arr[i];
        Xor ^= arr[i];
    }

    int Xor1=Xor;
    int l=0;

    while(!(Xor&1))
    {
    	Xor=Xor>>1;
    	l++;
    }

    Xor=Xor1;

    for(int i=0;i<k;i++)
    {
        int copy=arr[i];
    	copy = copy<<l;
    	if(copy&1)
    	{
    		Xor ^=arr[i];
    	}
        else
           Xor1 ^=arr[i]; 
    }

   if(Xor1<Xor)
    cout<<Xor1<<" "<<Xor;
   else
   	cout<<Xor<<" "<<Xor1;

}