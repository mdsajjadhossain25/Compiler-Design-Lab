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

bool checkOther(string s){
	if(!((s[3]>='a'&&s[3]<='z')||(s[3]>='A'&&s[3]<='Z')||(s[3]>='0'&&s[3]<='9'))){
		return false;
	}
	for(int i=4; i<s.size(); i++){
		if((s[3]>='a'&&s[3]<='z')||(s[3]>='A'&&s[3]<='Z')||(s[3]>='0'&&s[3]<='9')){
			continue;
		}
		return false;
	}
	return true;
}

void solve(string s){
	if(s.size()>=4){
		if(s[0]=='c' && s[1]=='h' && s[2]=='_'){
			if(checkOther(s)){
				cout << "character variable" << endl;
				return;
			}
		}
		if(s[0]=='b' && s[1]=='n' && s[2]=='_'){
			if(checkOther(s)){
				cout << "Binary variable" << endl;
				return;
			}
		}
	}
	if(s.size()<2){
		cout << "invalid Input" << endl;
		return;
	}
	if(s[0]!='0'){
		cout << "invalid Input" << endl;
		return;
	}
	for(int i=1; i<s.size(); i++){
		if(s[i]>='0' || s[i]<='9'){
			continue;
		}
		cout << "invalid Input" << endl;
		return;
	}
	cout << "Binary Data" << endl;
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    cin >> s;
    cout << s << endl;
    solve(s);
}
