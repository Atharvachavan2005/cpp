#include<bits/stdc++.h>
using namespace std;

string compressor(string& str){
    if(str.length()==0){
        return "";
    }
    string compressed = "";
    int n = str.length();
    for( int i = 0; i <n;){
        int j = i;
        while(j<n && str[i]==str[j]){
            j++;
        }
        int count = j-i;
        char currentChar = str[i];
        compressed += currentChar;
        compressed += to_string(count);
        i=j;
    }
    return compressed;
    
}

int main(){
    string input;
    cin>> input;
    string result= compressor(input);
    cout<< result << endl;
    return 0;
    
}
