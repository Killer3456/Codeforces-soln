#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);

	set<char> li;
	// cout<<s.size()<<endl;


	if(s.size()==2){
		cout<<0;
		return 0;
	}else if(s.size()==3){
		cout<<1;
		return 0;
	}else{
		for(int i=0; i<s.size();i++){
			if(s[i]=='{' || s[i]=='}' || s[i]==' ' || s[i]==','){
				continue;
			}else{
				li.insert(s[i]);
			}
		}
	}

	cout<<li.size();

	return 0;
}