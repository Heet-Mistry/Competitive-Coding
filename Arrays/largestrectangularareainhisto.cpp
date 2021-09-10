#include<iostream>
#include<stack>
#include<vector>

using namespace std;

// there is given a sequence of towers and we supposed to find maximum size rectangle in a given histogram
// we are given a histogram of length and height of each tower

long long maxrectarea(vector<int> h)
{
	int n=h.size();
	vector<int> left(n,-1),right(n,n);

	stack<int> st;
	for(int i=0;i<n;i++)
	{
		while(!st.empty() && h[i] < h[st.top()])
		{
			right[st.top()]=i;
			st.pop();
		}
		st.push(i);
	}
	cout<<"\n\n";

	for(int &x:right)
		cout<<x<<"  ";

	while(!st.empty())
		st.pop();

	for(int i=n-1;i>=0;i--)
	{
		while(!st.empty() && h[i] < h[st.top()])
		{
			left[st.top()]=i;
			st.pop();
		}
		st.push(i);
	}

	cout<<"\n\n";

	for(int &x:left)
		cout<<x<<"  ";
    
    cout<<endl;

	long long ans=0;
	for(int k=0;k<n;k++)
	{
		cout<<endl<<h[k]*(right[k]-left[k]-1)*1ll;
         ans=max(ans,h[k]*(right[k]-left[k]-1)*1ll);
	}
	cout<<endl;
	return ans;

}

int main()
{
	int n;
	cin>>n;
    
    vector<int> v(n,0); 

    for (int &x:v)
    {
    	cout<<"Enter new element";
        cin>>x;
    }

   cout<<endl<<endl<<maxrectarea(v);
    
    
      

	
} 