#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int untreated=0;
	int officer=0;
	while(n--){
		int x;
		cin>>x;
		if(x==-1&&officer==0){
			untreated++;
		}else if(x==-1 && officer>0){
			officer--;
		}else{
			officer+=x;
		}
	}
	cout<<untreated;
	return 0;
}