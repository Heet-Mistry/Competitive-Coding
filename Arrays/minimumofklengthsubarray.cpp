#include<iostream>
#include<deque>
#include<vector >

using namespace std;

vector<int> findmins(int a[],int n,int k)
{
	deque<int> dq;
	vector<int> ans;
	for(int i=1;i<=n;i++)
	{

      while(!dq.empty() && a[dq.back()]>=a[i])
      	dq.pop_back();                                   // Removing the greater element than current element in the deque
      
      while(!dq.empty() && dq.front() <= i-k)
      	dq.pop_front();              // removing the outdated element

      dq.push_back(i);          // adding the new element in the deque
 
      if(i>=k)
      	ans.push_back(a[dq.front()]);    // constructing the ans array
        
	}
  
  return ans;

}

int main()
{
  int n,k;
  cin>>n>>k;

  int a[n];

  for(int i=1;i<=n;i++)
  	cin>>a[i];
  
  vector<int> v = findmins(a,n,k);
  
  cout<<endl<<endl;

  for(auto x:v)
  	cout<<x<<"  ";

  
}