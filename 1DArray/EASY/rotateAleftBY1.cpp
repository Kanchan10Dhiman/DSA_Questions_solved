#include<iostream>
#include<vector>
using namespace std;

// left rotate array by one place
//in-plae
int rotatedByOne(vector<int>& a) {
    int n = a.size();
    int temp = a[0];
    for(int i = 0; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    a[n - 1] = temp;
}
//not in place 
vector<int> rotateByOne(vector<int> a) {
    vector<int> b;
    for(int i = 1; i < a.size(); i++)
        b.push_back(a[i]);
    b.push_back(a[0]);
    return b;
}

int main() {
    vector<int> a;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }

    rotatedByOne(a);

    // output
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
