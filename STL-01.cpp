/*
>>>>>>>>>>>>>BASIC<<<<<<<<<<<<<<<

1. Create an vector variable
vector<int> v;
👉 Creates an empty vector of integers

2.Add elements
v.push_back(10);
v.push_back(20);
v.push_back(30);

👉 Now:
v = [10, 20, 30]

3. Access elements
cout << v[0]; // 10
cout << v[1]; // 20

👉 Same as array

4. Size of vector
v.size()

5. Loop through vector
for(int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
}

6. Reverse print
for(int i = v.size()-1; i >= 0; i--){
    cout << v[i] << " ";
}

7. Input n elements
int n;
cin >> n;

vector<int> v;

for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    v.push_back(x);
}

8. Initialize directly
vector<int> v = {1, 2, 3, 4};


>>>>>>>>>>>>📌 Problem:

Input n numbers
👉 store in vector
👉 print them in reverse order

📥 Input
5
1 2 3 4 5

📤 Output
5 4 3 2 1




#include <bits/stdc++.h>  
using namespace std;
int main(){
    int n;
    cin>> n;

    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>> x;

        v.push_back(x);
    }

    for(int i=v.size()-1; i>=0; i--){
        cout << v[i] <<" ";
    }
    cout << endl;
}

>>>>>>>>>>>>>>>🧩 Problem:

Find the maximum element in a vector

📥 Input
5
2 8 1 6 3

📤 Output
8



#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;

    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>> x;
        v.push_back(x);
    }

    int mx=v[0];
    for(int i=0; i<v.size(); i++){
        if(v[i]>mx){
            mx=v[i];
        }
    }
    cout << mx << endl;
}

<<<<<<<<  int mx = *max_element(v.begin(), v.end());  >>>>>>>>>>>>>

*/
