#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  string s1,s2;
  for(int i=0;i<n;i++){
    cin>>s1>>s2;
    string s3=s1;
    s1[0]=s2[0];
    s2[0]=s3[0];
    cout<<s1<<" "<<s2<<endl;
  }
  return 0;
}
