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



 string reorganizeString(string s) {
        
       // sort(s.begin(),s.end());

        int n=s.length();

        map<char,int> m;
        
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }

        // for(auto it=m.begin();it!=m.end();it++)
        // {
        //     cout<<it->first<<"  "<<it->second<<endl;
        // }
        
        char ans[n];
        memset(ans,'.',sizeof(ans));
        int k=0;
        
        // while(k!=n){
           
        //     for(auto it=m.begin();it!=m.end();it++)
        //         {
        //             char x=it->first;
        //             int freq = it->second;
                    
        //          if(freq>0)
        //             {
        //                 if( k>=n && ans[k-1]==x )
        //                 {
        //                     return "";
        //                 }  
                            
        //                 ans[k]=x;
        //                 k++;
        //                 m[x]--;
                        
        //             }
        //         }
            
        // }
        
        // return ans;  
        
        return "";
    }

int main()
{
    cout<<reorganizeString("aab");
}