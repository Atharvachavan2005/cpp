#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin>>A>>B;
    int voulmeA = A*A*A;
    int volumeB = B*B*B;
    int result = voulmeA/volumeB;
    cout<<result<<endl;
    return 0;

}
