
#include<bits/stdc++.h>
using namespace std;    

int main(){
    int t;cin>>t;
    while(t--){

        int n; cin >> n;
        deque<char> dq;
        for(int i = 0; i < n; i++){
            char c; cin >> c;
            if(dq.empty()){
                dq.push_back(c);
            } else {
                if(c <= dq.front()){
                    dq.push_front(c);
                } else {
                    dq.push_back(c);
                }
            }
        }
        for(char c : dq){
            cout << c << " ";
        }cout<<endl;
    
    }

    return 0;
}
