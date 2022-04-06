#include <iostream>
#include<cstring>
using namespace std;


int ans=0;
int total =0;


void check(string inp, int len){
    string temp;
    for(int i=0;i<len;i++){
       
        temp = inp.substr(i,2);
        
        
        if(temp=="01"){
            ans++;
        }
    }
}

int main()
{
    string inp;
    cin>>inp;
    int len = inp.length();


    check(inp,len);
    cout<<"Actual string "<<inp<<": "<<ans<<endl;
    total+=ans;
    ans=0;

    for(int i=0;i<len-2;i++){
        for(int j=i+2;j<len;j++){
            string temp = inp;
            char x;
           
            x = temp[i];
            temp[i] = temp[j];
            temp[j] = x;

           
            if(temp!=inp){
                check(temp,len);
                cout<<"Sub String "<<temp<<": "<<ans<<endl;
                total+=ans;
                ans=0;
            }
        }
    }
   
    cout<<"\nTotal occurence will be: "<<total<<endl;
    return 0;
}
