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

vector<string> restoreIpAddresses(string A) {
    
    vector<string> str;   
    int n=A.length();
    
    regex v4 ("[0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5]");
    
    for(int i=0;i<n-3;i++)
       for(int j=i+1;j<n-2;j++)
          for(int k=j+1;k<n-1;k++)
             {
                string s1,s2,s3,s4;
                
                for(int l=0;l<=i;l++)
                    s1= s1+A[l];
                
                for(int l=i+1;l<=j;l++)
                    s2= s2 +A[l];
                
                for(int l=j+1;l<=k;l++)
                    s3= s3 +A[l];
                
                for(int l=k+1;l<n;l++)
                    s4= s4 +A[l];        
                 
                cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<"\n";
                  s1=s1 + '.' + s2 + '.' + s3+ '.'+ s4;
                  
                // if(regex_match(s1,v4) && regex_match(s2,v4) && regex_match(s3,v4) && regex_match(s4,v4))
                //    {
                //       str.push_back(s1);

                //    }
                 
                cout<<s1<<"\n";       
             
             }
      return str; 
}

int main()
{
	string s="0100100";
    vector<string > str;

    str=restoreIpAddresses(s);

}
