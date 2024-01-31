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

int checkChar(char ch){
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z') return 1;
	if(ch>='0' && ch<='9') return 2;
	if(ch==' ') return 3;
	return 4;
}

int countWords(char s[]){
	int rslt = 0, temp = 0;
	int n = strlen(s);
	for(int i=0; i<n; i++){
		if(checkChar(s[i])==3){
			rslt ++;
		}
	}
	rslt++;
	return rslt;
}
int countLetters(char s[]){
	int cnt = 0;
	for(int i = 0; i<strlen(s); i++){
		if(checkChar(s[i])==1){
			cnt++;
		}
	}
	return cnt;
}

int countDigits(char s[]){
	int cnt = 0;
	for(int i=0; i<strlen(s); i++){
		if(checkChar(s[i])==2){
			cnt++;
		}
	}
	return cnt;
}
int countOthers(char s[]){
	int cnt = 0;
	for(int i=0; i<strlen(s); i++){
		if(checkChar(s[i])==4){
			cnt++;
		}
	}
	return cnt;
}

void printAllLetters(char s[]){
	printf("All Letters= ");
	for(int i=0; i<strlen(s); i++){
		if(checkChar(s[i])==1){
			printf("%c ", s[i]);
		}
	}
	printf("\n");
}
void printAllDigits(char s[]){
	printf("All Digits= ");
	for(int i=0; i<strlen(s); i++){
		if(checkChar(s[i])==2){
			printf("%c ", s[i]);
		}
	}
	printf("\n");
}
void printAllOthers(char s[]){
	printf("All others= ");
	for(int i=0; i<strlen(s); i++){
		if(checkChar(s[i])==4){
			printf("%c ", s[i]);
		}
	}
	printf("\n");
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    char s[100];
    scanf("%[^\n]", s);
    printf("Total Words: %d\n", countWords(s));
    printf("Total Letters: %d\n", countLetters(s));
    printf("Totoal digit: %d\n", countDigits(s));
    printf("Total Others: %d\n", countOthers(s));

    printAllLetters(s);
    printAllDigits(s);
    printAllOthers(s);
}
