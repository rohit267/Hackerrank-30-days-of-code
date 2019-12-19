#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    map<string, long> myMap;
    for(int i=0;i<n;i++){
        string name;
        cin>>name;
        long number;
        cin>>number;
        myMap.insert(pair<string,long>(name,number));
    }
    string s;
    //map it;
    while(cin>>s){
        int found=0;
        for(auto itr = myMap.find(s); itr != myMap.end(); itr++){

                cout<<itr->first<<"="<<itr->second<<endl;
                found=1;
                break;

        }
        if(found==0){
            cout<<"Not found"<<endl;
        }
    }
    return 0;
}
