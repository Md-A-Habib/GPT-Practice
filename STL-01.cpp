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




🧩 Problem:>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

Input n numbers
👉 store in vector
👉 print them in reverse order

📥 Input
5
1 2 3 4 5

📤 Output
5 4 3 2 1


=====================================================================================================================


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



🧩 Problem:>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

Find the maximum element in a vector

📥 Input
5
2 8 1 6 3

📤 Output
8


=====================================================================================================================

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




🧩 Problem:>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 
Remove Duplicates from Sorted Array
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

=====================================================================================================================
    


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    cout << v[0] << " ";

    for(int i = 1; i < n; i++){
        if(v[i] != v[i-1]){
            cout << v[i] << " ";
        }
    }
    cout << endl;
}


🧩 Problem>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

 Merge Two Sorted Arrays
📌 Problem Statement

You are given two sorted arrays.
Merge them into a single sorted array and print it.

📥 Input
First line: integer n
Second line: n sorted integers

Third line: integer m
Fourth line: m sorted integers

📤 Output
Print the merged sorted array

🔒 Constraints
1≤n,m≤10
5

🧪 Example
Input
4
1 3 5 7
5
2 4 6 8 9

Output
1 2 3 4 5 6 7 8 9

===================================================================================================================

#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,m, i=0, j=0;
    
    cin>> n;
    vector<int>v1(n);
    while(i<n){
        cin>> v1[i];
        i++;
    }

    cin>> m;
    vector<int>v2(m);
    while(j<m){
        cin>> v2[j];
        j++;
    }

    int t= n+m;
    vector<int>nw(t);

    for(int k=0; k<n; k++){
        nw[k] = v1[k];
    }
    for(int k=n; k<t; k++){
        nw[k] = v2[k-n];
    }

    sort(nw.begin(), nw.end());

    for(int k=0; k<t; k++){
        cout << nw[k]<< " ";
    }
}

🧩 Problem>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 Two Sum (Sorted Array)

📌 Problem Statement
Given a sorted array and a target x,
find if there exist two numbers whose sum is x.

📥 Input
First line: integer n
Second line: n sorted integers
Third line: target x

📤 Output
Print:
YES

if such pair exists, otherwise:
NO

🧪 Example 1
Input
5
1 2 3 4 6
7

Output
YES

🧪 Example 2
Input
5
1 2 3 9 10
8

Output
NO

===================================================================================================================
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, t;
    cin>> n;
    
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>> v[i];
    }

    int x; cin>> x;
    int found=0;
    for(int i=0; i<n; i++){
        int sum;
        for(int j=i+1; j<n; j++){
            sum= v[i]+v[j];
            if (sum==x){
                found++;
                break;
            }
        }
    }
    if(found>0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
