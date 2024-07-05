#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  while (t--){
    string s;
    cin>>s;
    
    if (s.length() > 10){
    int count=s.length()-2;
    cout<<s[0]<<count<<s[count+1]<<endl;
    }
    else{
        cout<<s<<'\n';
    }
  }
}
