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



string expandCode(const string &shortCode) {

    //to access the course code declaring map
    std::map<int, string> mymap;
    mymap.insert(make_pair(41, "Compiler Design, Theory"));
    mymap.insert(make_pair(42, "Web Engineering, Theory"));
    mymap.insert(make_pair(43, "Software Engineering, Theory"));



    string expandedCode;
    
    // if (shortCode.size() < 8 || shortCode[3] != '-') {
    //     return "Invalid code format";
    // }
    
    // "checking department"
    switch (shortCode[0]) {
        case 'C':
            expandedCode += "Computer Science and Engineering";
            break;
        case 'M':
            expandedCode += "Mathematics";
            break;
        // Add more cases for other departments if needed.
        default:
            return "Invalid department code";
    }
    
    expandedCode += " - ";
    int idx;

    for(int i=0; i<shortCode.size(); i++){
        if(shortCode[i]=='-'){
            idx = i+1;
        }
    }
    
    // checking year 
    int year = shortCode[idx] - '0';
    switch (year) {
        case 1:
            expandedCode += "1st Year";
            break;
        case 2:
            expandedCode += "2nd Year";
            break;
        case 3:
            expandedCode += "3rd Year";
            break;
        case 4:
            expandedCode += "4th Year";
            break;
        default:
            return "Invalid year code";
    }
    
    expandedCode += ", ";
    
    // checking semester 
    int semester = shortCode[idx+1] - '0';
    if (semester < 1 || semester > 8) {
        return "Invalid semester code";
    }
    string cnt;
    if(semester==1){
        cnt = "st";
    }
    else if(semester==2){
        cnt = "2nd";
    }
    else{
        cnt = "rd";
    }
    expandedCode +=to_string(semester) + cnt +  " Semester";
    
    expandedCode += ", ";


    // checking course 
    
    int courseCode = stoi(shortCode.substr(idx+2));

    expandedCode+=mymap[courseCode];
    
    return expandedCode;
}

int main() {
    string shortCode;
    // cout << "Enter the short code: ";
    cin >> shortCode;
    
    string expanded = expandCode(shortCode);
    cout << expanded << endl;
}
