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

string convert(string A, int B) {
    unordered_map<int,char> m;
    int counter=0;
    int n=A.length();
    
    int jump=2*B-2;

    cout<<"jump is "<<jump<<endl;
    
    if(B==1)
    return A;
    
    for(int i=0;i<n;i)
      {
        cout<<counter<<" is connected to "<<A[i]<<" i is "<<i<<"\n";
          m[counter]=A[i];
          counter++;
          i+=jump;
      }
    
  
      
    for(int i=0;i<B-2;i++)
    {
          int start1=i+1;
          int start2=2*B-3-i;
          bool flag1=false;
          bool flag2=false;
          
          while(!flag1 || !flag2)
          {
              
               if(start1<n)
               {
                   cout<<counter<<" is connected to "<<A[start1]<<" i is "<<start1<<"\n";
                   m[counter]=A[start1];
                   counter++;
                   start1+=jump;
               }
               else
                 flag1=true;
               
               if(start2<n)
               {
                   cout<<counter<<" is connected to "<<A[start2]<<" i is "<<start2<<"\n";
                   m[counter]=A[start2];
                   counter++;
                   start2+=jump;
               }
               else
                 flag2=true;
          }
    }
    
    
    for(int i=B-1;i<n;i++)
      {
        cout<<counter<<" is connected to "<<A[i]<<" i is "<<i<<"\n";
          m[counter]=A[i];
          counter++;
          i+=jump;
      }
     
    string ans;
   
    for(int i=0;i<n;i)
       ans=ans+m[i];
    
    return ans;
    
}

int main()
{
  cout<<convert("PAYPALISHIRING",3);
  cout<<endl<<"PAHNAPLSIIGYIR";
}
