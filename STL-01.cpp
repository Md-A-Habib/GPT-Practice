/*
>>>>>>>>>>>>>BASIC<<<<<<<<<<<<<<<

1️⃣. Create an vector variable
vector<int> v;
👉 Creates an empty vector of integers

2️⃣ Add elements
v.push_back(10);
v.push_back(20);
v.push_back(30);

👉 Now:
v = [10, 20, 30]

3️⃣ Access elements
cout << v[0]; // 10
cout << v[1]; // 20

👉 Same as array

4️⃣ Size of vector
v.size()

5️⃣ Loop through vector
for(int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
}

6️⃣ Reverse print
for(int i = v.size()-1; i >= 0; i--){
    cout << v[i] << " ";
}

7️⃣ Input n elements
int n;
cin >> n;

vector<int> v;

for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    v.push_back(x);
}

8️⃣ Initialize directly
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



9️⃣ Taking Input

🎯 Normal loop
for(int i = 0; i < v.size(); i++){
    cin >> v[i];
}

👉 Same as:
for(auto &x : v){
    cin >> x;
}

👉 auto &x = shortcut for v[i]

➡️Example Code:
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);  // create vector of size n

    // input using range-based loop
    for(auto &x : v){
        cin >> x;
    }

    // print elements
    for(auto x : v){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}



1️⃣0️⃣ In-built shortcut
🔹Sort
    sort(v.begin(), v.end());                    // ascending
    sort(v.begin(), v.end(), greater<int>());   // descending

🔹Reverse
    reverse(v.begin(), v.end());

🔹Clear
    v.clear();   // remove all elements

🔹Check empty
    v.empty();   // true or false




>>>>>>>>>>>>>>>>🧩 Problem: Remove Duplicates from Sorted Array
📌 Problem Statement
You are given a sorted array of n integers.
Remove all duplicate elements and print only unique elements in order.

📥 Input
First line: integer n
Second line: n integers (sorted)

📤 Output
Print the array after removing duplicates

🔒 Constraints
1≤n≤10
5
Elements are already sorted

🧪 Example 1
Input
7
1 1 2 2 3 4 4

Output
1 2 3 4

🧪 Example 2
Input
5
5 5 5 5 5

Output
5
    */

