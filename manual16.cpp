#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<int> vi;
typedef std::vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define mp make_pair
#define pb push_back
#define pp pop_back
#define fi first
#define se second
#define as(x) (x).begin(), (x).end()
#define rev(x) (x).rbegin(), (x).rend()

void infixToPostFix(string s){
    map<char, int> pow;
    pow['+'] = 2;
    pow['-'] = 2;
    pow['/'] = 3;
    pow['*'] = 3;
    pow['^'] = 4;

    stack<char> st;
    vector<char> postfix;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                char tmp = st.top();
                postfix.pb(tmp);
                st.pop();
            }
            st.pop(); // popping '('
        }
        else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^'){
            if(!st.empty() && pow[st.top()]>pow[s[i]]){
                char tmp = st.top();
                postfix.pb(tmp);
                st.pop();
            }
            st.push(s[i]);
        }
        else{
            postfix.pb(s[i]);
        }
    }
    while(!st.empty()){
        postfix.pb(st.top());
        st.pop();
    }

    cout << "postfix: ";
    for(auto it: postfix){
        cout << it << " ";
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    cin >> s;
    infixToPostFix(s);
}
