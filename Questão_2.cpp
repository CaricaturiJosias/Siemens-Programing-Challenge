/*
    Questão 2 - Siemens
*/

#include <iostream>
#include <string.h>
using namespace std;

string ConcatERemove(string s,string t,int k){
    int duration = s.size();
    int ignorable = 0;   
    bool bigger = false;   
    if (s.size() > t.size()) {duration = t.size(); bigger = true;}
    
    if(duration<1 || duration>100) return "não";
    
    for(int i=0;i<duration; i++){
        if(!(s[i]==t[i])) break;
        ignorable++;
    }
    
    for(int i = 0; i<k; i++){
        if (s.size()>ignorable){s.erase(s.size()-1);}
        else if (s.size() != t.size()){
            char alvo = t[s.size()];
            s += alvo;
            ignorable++;
        }
        if (s==t) return "sim";
    }
    return "não";
}

int main(){
    string output = ConcatERemove("ashley", "ash", 2);
    cout << output << endl;
}