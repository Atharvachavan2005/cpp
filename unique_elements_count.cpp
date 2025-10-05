#include <bits/stdc++.h>
using namespace std;

int main() {
	int n ;
	cin >> n;
	set<int> unique_elements;
	for(int i = 0;i<n;i++){
	    int num;
	    cin>>num;
	    unique_elements.insert(num);
	}
	cout<< unique_elements.size()<<endl;

}
