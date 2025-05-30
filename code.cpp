#include <iostream>
#include <sstream>
using namespace std;
int main() {
  cout << unitbuf;
  cerr << unitbuf;
  int T=1;
while(T){
  cout << "$ ";
  string input;
  getline(cin,input);
  if(input.rfind("type ",0)==0){
    input=input.substr(5);
    if (input == "exit 0" || input == "exit" || input == "echo" || input == "type"){
      cout<<input<<" is a shell builtin"<<endl;
    }
    else{
      cout<<input<<": not found"<<endl;
    }
  }
  else if(input=="exit 0"){
  T=0;
}
else if (input.rfind("echo ",0)== 0)
{
  cout<< input.substr(5)<<endl;
}

else{
  cout<<input<<": command not found"<<endl;}
}

}
