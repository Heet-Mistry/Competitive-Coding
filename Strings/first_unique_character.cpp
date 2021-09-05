// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

//     int firstUniqChar(string s) {
//         unsigned int ans=s.length();
//         string alphabet = "abcdefghijklmnopqrstuvwxyz";
        
//         for(char c : alphabet)
//         {
//             cout<<c<<endl;
//             size_t found = s.find(c);
//             if(found!=string::npos)
//             {
//                 size_t right = s.find(c, found+1); 
//                 if (right == string::npos) 
//                    {
//                     ans=min(found,ans);
//                    }
//             }
         
//         }
//         return ans;

//         // for(char i='a';i<='z';i++)
//         // {
//         //     cout<<i<<endl;
//         //     size_t found = s.find(i, found+1); 
            
//         //     if(found==string::npos)
//         //         return s.find(i);
//         // }
//         // return -1;       
//     }

// int main()
// {
//     string s="leetcode";
//     cout<<firstUniqChar(s);
// }