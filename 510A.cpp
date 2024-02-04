#include<bits/stdc++.h>
using namespace std;

int main(){
	int row,col;
	cin>>row>>col;
	char pattern[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(i%2==0){
				pattern[i][j]='#';
			}else if(i%4==1){
				if(j==col-1){
					pattern[i][j]='#';
				}else{
					pattern[i][j]='.';
				}
			}else if(i%4==3){
				if(j==0){
					pattern[i][j]='#';
				}else{
					pattern[i][j]='.';
				}
			}
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<pattern[i][j];
		}
		cout<<endl;
	}
	return 0;
}