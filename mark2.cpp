#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> ve){
    for(int i=0;i<ve.size();i++){
        cout<<ve[i]<<" ";
    }
    cout<<"\n";
}

void subSetsV(vector<int> a,int counter,vector<int> store){
    if(counter == a.size()){
        printVec(store);
        return;
    }
    subSetsV(a,counter+1,store);
    store.push_back(a[counter]);
    subSetsV(a,counter+1,store);
}

int main(){
    vector<int> a={1,2,3,4};
    vector<int> emp;
    subSetsV(a,0,emp);

}