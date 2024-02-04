#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		vector<int> v;
		int z=0;
		int temp=n;
		while(temp){
			int x=temp%10;
			if(x!=0){
				z++;
				v.push_back(x);
			}else{
				v.push_back(x);
			}
			temp/=10;
		}
		cout<<z<<endl;
		for(int i=v.size()-2;i>=0;i--){
			if(v[i]==0) continue;
			cout<<v[i]*(pow(10,i))<<" ";
		}
		cout<<v[v.size()-1]*(pow(10,v.size()-1))<<endl;
	}
	return 0;
}