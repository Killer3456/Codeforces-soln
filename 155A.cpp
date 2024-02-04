#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
	
    int best=0,worst=0;
    int amazing_count=0;
    for(int i=0;i<n;i++){
    	int x;
    	cin>>x;
    	if(i==0){
    		best=x;
    		worst=x;
    	}
    	if(best<x){
    		amazing_count++;
    		best=x;
    	}else if(worst>x){
    		amazing_count++;
    		worst=x;
    	}
    }
    cout<<amazing_count;


	return 0;
}