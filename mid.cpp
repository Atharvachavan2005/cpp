#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >>n;
	vector<int>posarr;
	for(int i = 0;i<n;i++){
	    int temp;
	    cin>>temp;
	    if(temp>=0){
	        posarr.push_back(temp);
	    }
	}
	int count =posarr.size();
	int mid= (count-1)/2;
	cout<<posarr[mid]<<endl;
	return 0;

}
