#include <bits/stdc++.h>
using namespace std;

int main() {
	int n ;
	cin>> n;
	int min_val = INT_MAX;
	for (int i =0;i<n;i++){
	    int currentval;
	    cin>> currentval;
	    min_val = min(currentval, min_val);
	}
	cout<< min_val<<endl;

}
