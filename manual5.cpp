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

bool isFloatVariable(string s){
	if(!((s[0]>='a' && s[0]<='h') || (s[0]>='A' && s[0]<='H') || (s[0]>='o' && s[0]<='z') || (s[0]>='O' && s[0]<='Z'))){
		return false;
	}
	for(int i=1; i<s.size(); i++){
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
			continue;
		}
		return false;
	}
	return true;
}

bool checkS1(string s){
	if(s.size()==0) return false;
	if(s.size()==1) return true;
	if(!(s[0]>='1' && s[0]<='9')) return false;
    return true;
}

void give_verdict(string s){
	if(isFloatVariable(s)){
		cout << "Float variable" << endl;
	}
	string s1, s2;
	int cnt = 0;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='.'){
			cnt++;
			continue;
		}
		if(!(s[i]>='0' && s[i]<='9')){
			cout << "Invalid Input" << endl;
			return;
		}
		if(cnt==0){
			s1.pb(s[i]);
		}
		else{
			s2.pb(s[i]);
		}
	}
	if(cnt!=1 || (!checkS1(s1))){
		cout << "invalid input" << endl;
		return;
	}
	if(s2.size()==2){
		cout << "Float Number\n";
	}
	else if (s2.size()>2){
		cout << "Double Number\n";
	}
	else{
		cout << "Invalid Input\n";
	}
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    cin >> s;
    cout << s << endl;
    give_verdict(s);
}
