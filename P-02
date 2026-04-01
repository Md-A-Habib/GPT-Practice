/*
🧩 Problem 1: Frequency Array (Basic)
📌 Task:

Given a string s (only lowercase letters),
👉 Count frequency of each character.

🧾 Input:
abcab
✅ Output:
a -> 2  
b -> 2  
c -> 1
*/

/*====================================================================================================================*/


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>> s;

//     int freq[26]={0};  // work like 26 different variable and intial value of all 1-26 variable is 0

//     for(int i=0; i<s.size(); i++){
//         int index= s[i]-'a';  /*create char to index example: acb s[i]=a and compare with ASCII val then 97-97=0*/
//         freq[index]++; /*if we get 1 by calculating then index 1 of the array will increase*/
//     }

//     for(int i=0; i<26; i++){
//         if(freq[i]>0){ /*if array index val > 0 then string have this character*/
//             char ch= i+'a'; /*converting index to character. Ex: i=1 then 1+a(97)=b(98) result ch=b */
//             cout << ch << " -> " << freq[i] << endl; 
//         }
//     }
// }




/*====================================================================================================================*/

/*🧩 Problem 2: Count Distinct Characters
📌 Task:

Given a string s, find how many unique characters it has.

🧾 Input:
abca
✅ Output:
3

Explanation:

Characters: a, b, c → 3 distinct characters

*/



/*====================================================================================================================*/

/*
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);

    int freq[26]={0};

    for(int i=0; i<s.size(); i++){
        int index =s[i]-'a';
        freq[index]++;
    }

    int c=0;
    for(int i=0; i<26; i++){
        if(freq[i]>0){
            c++;
        }
    }
    cout << c << endl;
}*/


/*====================================================================================================================*/


/*🧩 Problem 3: Most Frequent Character
📌 Task:

Given a string s, find the character that appears the most.

🧾 Input:
programming
✅ Output:
g

Explanation:

'g' appears 2 times, more than any other character
*/


/*====================================================================================================================*/


/*#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int freq[26] = {0};

    for(int i=0; i<s.size(); i++){
        int index= s[i]-'a';
        freq[index]++;
    }

    int n = sizeof(freq)/sizeof(freq[0]);
    int maxVal = *max_element(freq, freq+n);

    for(int i=0; i<n; i++){
        if(freq[i]== maxVal){
            char ch= i+'a';
            cout << ch << endl;
        }
    }
}

==========================================================================================================================*/

/*🧩 Problem 4: First Non-Repeating Character (Continue)
📌 Task:

Given a string s,
👉 print the first character that appears only once

🧾 Input:
aabccdeff

✅ Output:
b

*/



#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int freq[26]={0};

    for(int i=0; i<s.size(); i++){
        int index=s[i]-'a';
        freq[index]++;
    }

    for (int i=0; i<s.size(); i++){
        if(freq[s[i]-'a']==1){
            cout << s[i] << endl;
            break;
        }
    }
}























