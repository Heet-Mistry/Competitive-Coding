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

bool solve(vector <int> a,int k)
{
  
      map<int,int> m;

      int n=a.size();

      for(int i=0;i<=k;i++)
        m[a[i]]++;

      int pointer1=0;
      int pointer2=k;

      while(pointer2<=n)
      {
        if(m[a[pointer1]]>1)
            return true;
        else{
            m[a[pointer1]]--;
            pointer1++;
            pointer2++;
            m[a[pointer2]]++;
        }
      }

      return false;

}

int main()
{
   int n;
   cin>>n;

   vector<int> arr(n);
   int a;

   for(int i=0;i<n;i++){
     cin>>arr[i];
   }

   int k;
   cin>>k;
  
   // for(int i=0;i<n;i++){
   //   cout<<arr[i]<<" ";
   // }

   // cout<<endl<<n<<endl<<k;

   cout<<solve(arr,k);
}