#include <bits/stdc++.h>
using namespace std;
bool ispallindrome(string s){
    string::reverse_iterator it;
    string t="";
    for(auto it =s.rbegin();it!=s.rend();it++){
        t+=*it;
    }
    //cout<<t<<" "<<s<<endl;
    if(t==s)return 1;
    else return 0;
}
int main() {
	string p="JAHAJ";
	cout<<ispallindrome(p);
	return 0;
}
