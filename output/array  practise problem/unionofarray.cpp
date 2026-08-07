#include <bits/stdc++.h>
using namespace std;

int unionofarray(const vector<int>& a, const vector<int>& b){
    int i = 0;
    int j = 0;
    vector<int> ans;

    while(i < (int)a.size() && j < (int)b.size()){
        int val;
        if(a[i] < b[j]){
            val = a[i++];
        } else if(a[i] > b[j]){
            val = b[j++];
        } else {
            val = a[i];
            i++;
            j++;
        }
        if(ans.empty() || ans.back() != val){
            ans.push_back(val);
        }
    }

    while(i < (int)a.size()){
        int val = a[i++];
        if(ans.empty() || ans.back() != val){
            ans.push_back(val);
        }
    }

    while(j < (int)b.size()){
        int val = b[j++];
        if(ans.empty() || ans.back() != val){
            ans.push_back(val);
        }
    }

    return ans.size();
}

int main(){
    int n, m;
    cout << "enter size of first array: ";
    cin >> n;
    vector<int> a;
    a.reserve(n);
    cout << "Enter elements of first array: ";
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }

    cout << "enter size of second array: ";
    cin >> m;
    vector<int> b;
    b.reserve(m);
    cout << "Enter elements of second array: ";
    for(int j = 0; j < m; j++){
        int x;
        cin >> x;
        b.push_back(x);
    }

    int size = unionofarray(a, b);
    cout << "Size of Union = " << size << endl;
    return 0;
}

 

    
