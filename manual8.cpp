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



bool isKeyword(string s){
	ifstream keywords("keywords.txt");
	string key;
	while(getline(keywords, key)){
		if(s==key){
			keywords.close();
			return true;
		}
	}
	keywords.close();
	return false;
}
bool isOperator(string s){
	ifstream operators("operators.txt");
	string op;
	while(getline(operators, op)){
		if(op==s){
			operators.close();
			return true;
		}
	}
	operators.close();
	return false;
}

bool isIntegerConstant(string s){
	int i=0; 
	if(s[i]=='-' || s[i]=='+'){
		i++;
	}
	bool hasDigit = false;
	for(; i<s.size(); i++){
		if(!isdigit(s[i])){
			return false;
		}
		hasDigit = true;
	}
	return hasDigit;
}

bool isFloatingPointConstant(string s){
	int i=0; 
	if(s[i]=='-' || s[i]=='+'){
		i++;
	}
	for(; i<s.size(); i++){
		if(!isdigit(s[i])){
			break;
		}
	}
	if(i<s.size() && s[i]=='.'){
		i++;
		bool hasDigitAfterDecimal = false;
		for(; i<s.size(); i++){
			if(!isdigit(s[i])){
				return false;
			}
			hasDigitAfterDecimal = true;
		}
		return hasDigitAfterDecimal;
	}
	return false;
}

bool isCharacterLiteral(string s){
	return s.size() == 3 && s[0] == '\'' && s[2] == '\'';
}

bool isConstant(string s){
	if(isIntegerConstant(s)){
		return true;
	}
	else if(isFloatingPointConstant(s)){
		return true;
	}
	else if(isCharacterLiteral(s)){
		return true;
	}
	return false;
}

bool isIdentifier(string s){
	if(!(s[0]=='_' || (s[0]>='a' && s[0]<='z') || (s[0]>='A' && s[0]<='Z'))){
		return false;
	}
	for(int i=1; i<s.size(); i++){
		if((s[i]=='_' || (s[i]>='a' && s[i]<='z')|| (s[0]>='A' && s[0]<='Z') || (s[0]>='0' && s[0]<='9'))){
			continue;
		}
		return false;
	}
	return true;
}

void solve(string s){
	if(isKeyword(s)){
		cout << "Keyword\n";
	}
	else if(isOperator(s)){
		cout << "Operator\n";
	}
	else if(isConstant(s)){
		cout << "Constant\n";
	}
	else if(isIdentifier(s)){
		cout << "Identifier\n";
	}
	else{
		cout << "others\n";
	}
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    cin >> s;
    solve(s);
}
