//removes a's in code in recursion
#include<bits/stdc++.h>
using namespace std;
string aRemover(string str,string strN,int counter){
    if(counter==str.size()){
        return strN;
    }
    if(str[counter]!='a'){
        strN+=str[counter];
    }
    return aRemover(str,strN,counter+1);
}

int main(){
    string str="waanqcncpaefafwea";
    cout<<aRemover(str,"",0);
}