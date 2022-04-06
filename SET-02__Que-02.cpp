#include<iostream>
#include<string>
using namespace std;

class charInput{
private:
    string value;
public:
    virtual void add(char c){ value=value+c;}
    string getValue() {
        return value;
    }    
};
class numInput: public charInput{

public:
    void add(char c){
        if(!isalpha(c)){
            return charInput::add(c);
        }
        
    }
};
int main(){
charInput* inputC = new charInput();
numInput* inputN = new numInput();
inputN->add('1');
inputN->add('a');
inputN->add('0');
cout<<inputN->getValue();

}
