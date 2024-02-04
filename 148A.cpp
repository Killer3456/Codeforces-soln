#include<bits/stdc++.h>
using namespace std;

int main(){
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	int arr[d];
	for(int i=0;i<d;i++){
		arr[i]=0;
	}
    int q=1;
    while((q*k)<=d){
    	arr[(q*k)-1]=1;
    	q++;
    }
    int w=1;
    while((w*l)<=d){
    	arr[(w*l)-1]=1;
    	w++;
    }
    int e=1;
    while((e*m)<=d){
    	arr[(e*m)-1]=1;
    	e++;
    }
    int r=1;
    while((r*n)<=d){
    	arr[(r*n)-1]=1;
    	r++;
    }

    long long int sum=0;

    for(int i=0;i<d;i++){
    	sum+=arr[i];
    }

    cout<<sum;

	return 0;
}