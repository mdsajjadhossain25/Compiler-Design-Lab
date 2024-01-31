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

bool isInt(string s){
	if(!((s[0]>='i' && s[0] <='n') || (s[0]>='I' && s[0]<='N'))){
		return false;
	}
	for(int i=1; i<s.size(); i++){
		if ((s[i]>= 'a' && s[i] <= 'z') || (s[i]>= 'A' && s[i] <= 'Z') || (s[i]>= '0' && s[i] <= '9')){
			continue;
		}
		else{
			return false;
		}
		
	}
	return true;
}

bool contains_digits(string s){
	if(!(s[0]>='1' && s[0]<='9')){
		return false;
	}
	for(int i=1; i<s.size(); i++){
		if(s[i]>='0' && s[i]<='9'){
			continue;
		}
		return false;
	}
	return true;
}

void give_verdict(string s){
	if(isInt(s)){
		cout << "Integer variable" << endl;
	}
	else if(contains_digits(s)){
		if(s.size()<5){
			cout << "short Integer number\n";
		}
		else{
			cout << "long Integer Number\n";
		}
	}
	else{
		cout << "invalid Input" << endl;
	}
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // input:
    // i23948fhcbyrgfb
    // 1349
    // 90038274
    // a83272
    string s;
    cin >> s;
    cout << s << endl;
    give_verdict(s);
}
