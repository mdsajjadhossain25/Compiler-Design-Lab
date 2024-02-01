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

vector<string> PN_P = {"Sagor", "Selim", "Salma", "Nipu", "he", "she", "I", "we", "you", "they"};
vector<string> V = {"read", "eat", "take", "run", "write"};
vector<string> N = {"book", "cow", "dog", "home", "grass", "rice", "mango"};

bool checkSub(string s){
	for(auto it: PN_P){
		if(it==s){
			return true;
		}
	}
	return false;
}

bool checkVerb(string s){
	for(auto it: V){
		if(it==s){
			return true;
		}
	}
	return false;
}

bool checkObj(string s){
	for(auto it: N){
		if(it==s){
			return true;
		}
	}
	return false;
}

void solve(string s){
	// spliting the sentence into words
	vector<string> words;
	string word;
	for(int i=0; i<s.size(); i++){
		if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') ){
			word.pb(s[i]);
		}
		else{
			if(word.size()!=0){
				words.pb(word);
			}
			word.clear();
		}
	}
	if(word.size()!=0){
		words.pb(word);
	}

	// sentence size must be 2 or 3.
	if(words.size()<2 || words.size()>3){
		cout << "invalid sentence" << endl;
		return;
	} 
	// check first word should be PN or P and second word should be V 
	if(!(checkSub(words[0]) && checkVerb(words[1]))) {
		cout << "invalid sentence\n";
		return;
	}
	// and if sentence size is 3 then the third word should be a N 
	if(words.size()==3 && !(checkObj(words[2]))){
		cout << "invalid sentence\n";
		return;
	}
	cout << "valid sentence\n";
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    getline(cin, s);
    cout << s << endl;
    solve(s);
}  
