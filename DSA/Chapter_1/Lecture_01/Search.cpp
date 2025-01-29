#include<bits/stdc++.h>
using namespace std;

int main(){
    int n[10];
    for (int i = 0; i < 10; i++){
        cin >> n[i];
        }
    int f;
    cin >> f;
    for(int i = 0; i < 10; i++){
        if(n[i] == f){
            cout << "Element found at index " << i << endl;
            cout << "The element is " << n[i] << endl;
            break;
        }
    }
        
}
    
