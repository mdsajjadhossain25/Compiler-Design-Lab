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

char input[1000];

bool is_word_char(char c) {
    return isalpha(c) || isdigit(c);
}


void categorize_characters() {

    printf("Letter Characters:\n");
    for (int i = 0; input[i] != '\0'; i++) {
        if (isalpha(input[i])) {
            printf("%c ", input[i]);
        }
    }

    printf("\nOther Characters:\n");
    for (int i = 0; input[i] != '\0'; i++) {
        if (!isalpha(input[i]) && !isspace(input[i]) && !isdigit(input[i])) {
            printf("%c\n", input[i]);
        }
    }


    printf("Digits: \n");
    for (int i = 0; input[i] != '\0'; i++) {
        if (isdigit(input[i])) {
            printf("%c\n", input[i]);
        }
    }

    printf("words: \n");
    for (int i = 0; input[i] != '\0'; i++) {  
        if(input[i]==' ' || input[i]=='.' || input[i]==','){
            printf("\n");
            continue;
        }
        else{
            printf("%c", input[i]);
        }

    }
}




void solve(){

    int word_letters = 0, digits = 0, others = 0;
    fgets(input, sizeof(input), stdin);

    for (int i = 0; input[i] != '\0'; i++) {
        if (isalpha(input[i]))
            word_letters++;
        else if (isdigit(input[i]))
            digits++;
        else if (!isspace(input[i]))
            others++;
    }

    printf("Word Letters: %d\n", word_letters);
    printf("Digits: %d\n", digits);
    printf("Other Characters: %d\n", others);


}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    solve();
    categorize_characters();
}

