#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>> n;
	int temp;
	long long sumA =0;
	long long sumB = 0;
	long long sumC = 0;
	
	for(int i=0;i<n;i++){
	    cin>> temp;
	    sumA += temp;
	}
	for(int i=0;i<n-1;i++){
	    cin>> temp;
	    sumB += temp;
	}
	for(int i = 0; i<n-2;i++){
	    cin>> temp;
	    sumC += temp;
	}
	int X= sumA-sumB;
	int Y =sumB- sumC;
	cout<<"X:" <<X <<"  Y:" <<Y << endl;

}
