#include <bits/stdc++.h>
using namespace std;

int main() {
	int n , k;
	cin>> n>> k;
	vector<long long>profits(n+2,0);
	for(int i =0; i<k;i++){
	    int start , end, value;
	    cin>> start >> end >> value;
	    profits[start] += value;
	    profits[end+1] += value;
	}
	long long max =0;
	for (int i = 1; i<=n;i++){
	    profits[i] += profits[i-1];
	    if(profits[i]>max){
	        max=profits[i];
	    }
	}
	cout<< max <<endl;
	return 0;

}
