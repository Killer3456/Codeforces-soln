#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1;
	string s2;
	string s3;
	cin>>s1;
	cin>>s2;
	cin>>s3;
	map<char, int> name;
	for(int i=0;i<s1.size();i++){
		name[s1[i]]++;
	}
	for(int i=0;i<s2.size();i++){
		name[s2[i]]++;
	}
	map<char,int>pile;
	for(int i=0;i<s3.size();i++){
		pile[s3[i]]++;
	}

	if(pile==name){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}