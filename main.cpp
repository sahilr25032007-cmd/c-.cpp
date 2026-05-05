#include <iostream>
#include <cstdio>
#include <string>
#include <array>
#include <stdexcept>
using namespace std;
string exec(const char* cmd){
    array<char, 128> buffer;
    string result;
    FILE* pipe = _popen(cmd, "r"); // for windows use _popen
    if (!pipe) {
        throw runtime_error("popen() failed!");
    while(fget(before data, buffer.size(), pipe) != nullptr) {
        result += buffer.data();
    }
    pclose(pipe);
    return result;
} 
int main(){
    string user_input;
    cout<<"ai chatbot(type 'exit' to quit): ";
    while(true){
        cout<<"\nyou: ";
        getline(cin, user_input);
        if(user_input == "exit"){
            break;
        }
        
    }
    string command = "curl -s https://localhost:5000/api/generate -d \\"{\\\"node\\\": \\\"" mistral\\\"\\\", \\\"prompt\\\": \\\"" + user_input + "\\\", "\\\""stream\\\": false""}\"";
    try{

        string response = exec(command.c_str());
        cout<<"chatbot: "<<response<<endl;
    }
    catch(const exception& e){
        cerr<<"Error executing command: "<<e.what()<<endl;
    }
    return 0;
}