#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    map<string, char> word_map;
    word_map["zero"]='0';
    word_map["one"]='1';
    word_map["two"]='2';
    word_map["three"]='3';
    word_map["four"]='4';
    word_map["five"]='5';
    word_map["six"]='6';
    word_map["seven"]='7';
    word_map["eight"]='8';
    word_map["nine"]='9';
    
    string line;
    getline(cin, line);
    stringstream ss(line);
    string word;
    string result ="";
    while(ss>>word){
        if(word=="double"){
            ss>>word;
            char digit = word_map[word];
            result += digit;
            result += digit;
            
        }
        else if(word=="triple"){
            ss>>word;
            char digit = word_map[word];
            result += digit;
            result += digit;
            result += digit;
            
        }
        else {
            char digit = word_map[word];
            result += digit;
        }
    }
    cout<<result<<endl;
    return 0;
}
