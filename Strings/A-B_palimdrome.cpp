#include<bits/stdc++.h>
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
#include<regex>

void solve()
{
	
	int a,b;
	cin>>a>>b;
	string s;
	cin>>s;
	int n=s.length();

    
    if(n%2!=0)
    {
    	if(s[n/2]=='0')
    		a--;
    	else if(s[n/2]=='1')
    		b--;
    	else if(s[n/2]=='?')
    	{
    		if(a%2!=0)
    		{
    			s[n/2]='0';
    			a--;
    		}
    		else if(b%2!=0)
    		{
    			s[n/2]='1';
    			b--;
    		}
    		else
    		{
    			cout<<"-1"<<endl;
    	        return;
    		}
    	}
    } 
    // 
    if(a%2!=0 || b%2!=0)
    {
    	cout<<"-1"<<endl;
    	return;
    }

	int i=0;
	int j=s.length()-1;
    int count=0;

	while(i<j)
	{
		if(s[i]=='?' && s[j]=='?')
			count+=2;
		else if(s[i]=='0' && s[j]=='0')
			{
				 if(a<=0)
	             	{
	             		cout<<"-1"<<endl;
	             		return;
	                }
	              
				a-=2;
				//cout<<s<<" "<<a<<" "<<b<<endl;
			}
		else if(s[i]=='1' && s[j]=='1')
			{
				if(b<=0)
             	{
             		cout<<"-1"<<endl;
             		return;
                }
				b-=2;
				//cout<<s<<" "<<a<<" "<<b<<endl;
			}
		else if(s[i]=='0' && s[j]=='?')
		{
             if(a<=0)
             	{
             		cout<<"-1"<<endl;
             		return;
                }
      
             	s[j]='0';
             	a-=2; 
             	//cout<<s<<" "<<a<<" "<<b<<endl;
		}
		else if(s[i]=='1' && s[j]=='?')
		{
			 if(b<=0)
             	{
             		cout<<"-1"<<endl;
             		return;
                }
                
             	s[j]='1';
             	b-=2;
             	//cout<<s<<" "<<a<<" "<<b<<endl;
             
		}
		else if(s[i]=='?' && s[j]=='0')
		{
			 if(a<=0)
             	{
             		cout<<"-1"<<endl;
             		return;
                }
             
             	s[i]='0';
             	a-=2;
             	//cout<<s<<" "<<a<<" "<<b<<endl;
             
		}
		else if(s[i]=='?' && s[j]=='1')
		{
			 if(b<=0)
             	{
             		cout<<"-1"<<endl;
             		return;
                }
             
             	s[i]='1';
             	b-=2;
             	//cout<<s<<" "<<a<<" "<<b<<endl;      
		}
		else if(s[i]=='0' && s[j]=='1')
		{
			cout<<"-1"<<endl;
             		return;   
		}
		else if(s[i]=='1' && s[j]=='0')
		{
			cout<<"-1"<<endl;
             		return;  
		}



		i++;
		j--;
	}

   i=0;
   j=n-1;

   while(i<j)
   {
   	   if(s[i]=='?' && s[j]=='?')
   	   {
   	   	  if(a>0)
   	   	  {
   	   	  	s[i]='0';
   	   	  	s[j]='0';
   	   	  	a-=2;
   	   	  	//cout<<s<<" "<<a<<" "<<b<<endl;
   	   	  }
   	   	  else if(b>0)
   	   	  {
   	   	  	 s[i]='1';
   	   	  	 s[j]='1';
   	   	  	 b-=2;
   	   	  	 //cout<<s<<" "<<a<<" "<<b<<endl;
   	   	  }
   	   	  else
   	   	  {
   	   	  	cout<<"-1"<<endl;
             		return;
   	   	  }
   	   }
   	   i++;
   	   j--;
    }
   cout<<s<<endl;
}

int main()
{
	int t;
	cin>>t;
    while(t--)
    {
    	solve();
    }
}