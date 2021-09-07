#include<bits/stdc++.h>
#include<regex>
#define ll long long 
#define vi vector<int>
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define fi first
#define se second
#define INF 1000000007
#define mod 1000000007
#define fr(i,a,n) for(int i=a;i<n;i++)
using namespace std;

string solve(string num1,string num2)
{
	reverse(num1.begin(),num1.end());
	reverse(num2.begin(),num2.end());
   
    int arr[400]={0};
    
    int j=0;
    int carry=0;
    int i=0;
	for(i=0;i<num1.size();i++)
	{
       arr[i]+= arr[i] + (num1[i] -'0')*(num2[j]-'0');
       arr[i]=arr[i]%10;
       carry+=arr[i]/10;
	}

	while(carry)
	{
      arr[i]=carry%10;
      carry/=10;
      i++;
	}
	i--;

	string s="";

	for(int k=i;k>=0;k++)
		s+=to_string(arr[k]);

	return s;


}

int main()
{
	string s1="1545";
	string s2="3";

	cout<<"hekdljs";
}