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

string longestPalindrome(string A) {
   
    int n=A.length();
    int start=-2;
    int end=A.length()+2;
    int max=-2;
    
    for(int i=0;i<n;i++)
    {
        int left=i-1;
        int right=i+1;
        bool flag=true;
        
        while(left>=0 && right<n && flag)
        {
            if(A[left] == A[right])
               {
                   if(right-left>max)
                    {
                        max=right-left;
                        start=left;
                        end=right;
                    }
                    left--;
                    right++;
               }
            else
              flag=0;
        }
    }
    
    for(int i=0;i<n-1;i++)
    {
        if(A[i]==A[i+1])
        {
            int left=i-1;
            int right=i+2;
            bool flag=true;
            
            while(left>=0 && right<n && flag)
             {
                if(A[left] == A[right])
                   {
                       if(right-left>max)
                        {
                            max=right-left;
                            start=left--;
                            end=right++;
                        }
                   }
                else
                  flag=0;
             }
        }
    }
    
    string ans="";
    
    for(int i=start;i<=end;i++)
    {
        ans=ans+A[i];
    }
    
    return ans;
    
    
}

int main()
{
    cout<<longestPalindrome("aaaabaaa");
}