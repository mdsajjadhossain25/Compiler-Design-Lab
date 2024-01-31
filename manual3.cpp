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

map<string, string> full_form;
vector<string> courses[5][3];

void preDefine(){
	full_form["CSE"] = "Computer Science and Engineering";
	full_form["EEE"] = "Electrical and Electronics Engineering";
	full_form["ICE"] = "Information and Communication Engineering";

	courses[3][1].pb(" ");
	courses[3][1].pb("SWE");
	courses[3][1].pb("DBMS");
	courses[3][1].pb("Web Engineering");
	courses[3][1].pb("Compiler Design");
	courses[3][1].pb("Mobile App");

}
void print(int n){
	if(n==1){
		cout << "1st";
	}
	else if(n==2){
		cout << "2nd";
	}
	else if(n==3){
		cout << "3rd";
	}
	else{
		cout << n << "th";
	}
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    preDefine();
    string s;
    cin >> s;
    int n = s.size();
    string dept = "";
    for(int i=0; s[i]!='-'; i++){
    	dept.pb(s[i]);
    }
    int year = s[n-4]-'0';
    int semester = s[n-3]-'0';
    cout << full_form[dept] << "," ;
    print(year); cout << " year,";
    print(semester); cout << " semester,";
    cout << courses[year][semester][s[n-2]-'0'];
    if(s[n-1]=='1'){
    	cout << ", theory";
    }
    else{
    	cout << ", Lab";
    }
    cout << endl;

}
