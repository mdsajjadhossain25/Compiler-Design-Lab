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

vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

bool isLetter(char ch){
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
		return true;
	else
		return false;
}

bool isVowel(char ch){
	for(auto it:vowels){
		if(it==ch){
			return true;
		}
	}
	return false;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    getline(cin, s);
    cout << s << endl;

    vector<char> str_v, str_c;
    int cnt_v=0, cnt_c=0;

    for(int i=0; i<s.size(); i++){
    	if(isLetter(s[i])){
    		if(isVowel(s[i])){
    			cnt_v++;
    			str_v.pb(s[i]);
    		}
    		else{
    			cnt_c++;
    			str_c.pb(s[i]);
    		}
    	}
    }
    cout << "No of vowels: " << cnt_v << endl;
    cout << "No of Consonant: "<< cnt_c << endl;
    cout << "vowerls are: ";
    for(auto it: str_v){
    	cout << it << " ";
    }
    cout << "\nConsonant are : ";
    for(auto it:str_c){
    	cout << it << " ";
    }

    vector<string> word_v, word_c;
    string tmp;
    for(int i=0; i<s.size(); i++){
    	if(isLetter(s[i])){
    		tmp.pb(s[i]);
    	}
    	else if(tmp.size()){
    		if(isVowel(tmp[0])){
    			word_v.pb(tmp);
    		}
    		else{
    			word_c.pb(tmp);
    		}
    		tmp.clear();
    	}
    }
    if(tmp.size()){
    	if(isVowel(tmp[0])){
    		word_v.pb(tmp);
    	}
    	else{
    		word_c.pb(tmp);
    	}
    }
    cout << "words started with vowels are: ";
    for(auto it:word_v){
    	cout << it << " ";
    }
    cout << "\n words started with Consonant are: ";
    for(auto it:word_c){
    	cout << it << " ";
    }
    cout << endl;

}
