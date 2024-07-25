#include<iostream>
#include<stack>
using namespace std;
class Solution{
    public:
        char num;
        int count;
        stack<char>str;
        string removeOuterParentheses(string s){
            if(s.length()>0){
                for(int i=0; i<s.length(); i++ )  str.push(s[i]); 
                if(count==0 && !str.empty() || (count-1)==0){
                        count+=1;
                        str.pop();                       
                }
            }
            else return " ";
        }
};
int main(){
    Solution s;
    string u= "(()())(())";
    //cout<<u.length();
    cout<<s.removeOuterParentheses(u);
}