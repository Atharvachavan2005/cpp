#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a,b,c,d;
    cin>> a >>b>>c>>d;
    int negative_sum = 0;
    if(a<0){
        negative_sum += a;
    }
    if(b<0){
        negative_sum += b;
    }
    if(c<0){
        negative_sum += c;
    }
    if(d<0){
        negative_sum += d;
    }
    cout<< negative_sum<< endl;
    return 0;
}
