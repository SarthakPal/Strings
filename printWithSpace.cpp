#include<bits/stdc++.h>
using namespace std;

void printWithSpace(string ip, string op)
{
    if(ip.length()==0)
    {
        cout<<op<<endl;
        return;
    }
    
    string op1 = op;
    op1.push_back(ip[0]);
    
    string op2 = op;
    op2.push_back(' ');
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    
    printWithSpace(ip,op1);
    printWithSpace(ip,op2);
    
}

int main() {
	string ip = "abc";
	string op = "a";
	ip.erase(ip.begin()+0);
    printWithSpace(ip,op);
	return 0;
}