#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	map<string,int> face;
	face["Tetrahedron"]= 4;
	face["Cube"]= 6;
	face["Octahedron"]=8 ;
	face["Dodecahedron"]= 12;
	face["Icosahedron"]= 20;
	int ans=0;
	while(n){
		string s;
		cin>>s;
		ans+=face[s];
		n--;
	}
	cout<<ans;
	return 0;
}