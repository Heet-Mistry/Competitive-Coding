#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int counter=0;

struct node
{
    char symbol;
    int freq=0;
    node* left;
    node* right;
    node(char symbol,int freq)
    {
      this->left=nullptr;
      this->right=nullptr;
      this->symbol=symbol;
      this->freq=freq;
    }
    
};

struct myComp {
    constexpr bool operator() ( node* const &a , node* const &b) const noexcept
    {
        return a->freq>b->freq;
    }
};

void printHuffCodes(node *root, string str,int n)
{
    if (root == nullptr)
        return;
        
    // if(counter==n)
    // exit(0);
    
    if (root->symbol != '#') {
        //cout << root->symbol << " " << str << " ";
        cout << str << " ";
        // counter++;
        // cout<<counter<<" ";
    }
    
    if (root->left) printHuffCodes(root->left, str + '0',n);
    if (root->right) printHuffCodes(root->right, str + '1',n);
}
void huffman_coding()
{
    string str;
    cin>>str;
    
    int freq_arr[str.length()];
    
    for(int i=0;i<str.length();i++)
    cin>>freq_arr[i];
    
    priority_queue <node*, vector<node*>, myComp > pq;
    
    int n=str.length();
    
    // cout<<n<<endl;

    for (int i = 0; i < n; i++) {
        pq.push(new node(str[i], freq_arr[i]));
        //cout << str[i] << " " << freq[i] << " ";
    }

    while(pq.size()>1)
    {
      node *n1=pq.top();

      pq.pop();

      node *n2=pq.top();

      pq.pop();

      node* n3=new node('#',n1->freq+n2->freq);

      n3->freq= n1->freq+n2->freq;
      n3->left=n1;
      n3->right=n2;

      pq.push(n3);
    }

   
    node *m =pq.top();

    printHuffCodes(m,"",n);
}

int main() {
  
  int t;
  cin>>t;
  
  while(t--)
  {
      huffman_coding();
  }
  
  return 0;
}