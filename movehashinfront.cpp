#include <bits/stdc++.h>
using namespace std;

void moveHash(string& str){
    int n = str.length();
    int write = n-1;
    for( int read=n-1;read>=0;read--){
        if(str[read] != '#'){
            str[write]=str[read];
            write--;
        }
    }
    while(write>=0){
        str[write]='#';
        write--;
    }
}

int main() {
	string input;
	cin>> input;
	moveHash(input);
	cout<<input<<endl;
	return 0;
}