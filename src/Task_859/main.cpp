//
// Created by Jest Craster on 11/27/23.
//
#include <iostream>
#include <string>
#include <map>
using std::map;
using std::string;
class Solution {
public:
    static bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        if(s == goal){
            map<char,int> sMap;
            for(auto c:s)sMap[c]++;
            for(auto [_,val]:sMap) if(val%2 ==0) return true;
        }
        size_t first = 0, second =s.size()-1;
        while(first != second && s[first] == goal[first]) ++first;
        while(first != second && s[second] == goal[second]) --second;
        if(first == second) return false;
        std::swap(s[first],s[second]);
        return s == goal;
    }
};

int main(){
    std::cout<<Solution::buddyStrings("as","sa")<<'\n';
//    std::cout<<"Hello world!\n";
}