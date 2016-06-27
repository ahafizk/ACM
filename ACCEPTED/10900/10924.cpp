#include<iostream> 
#include<string> 
using namespace std; 

bool isprime(int n) 
{ 
    if(n==1) return 1; 
    if(n==2) return 1; 
    if(n%2==0) return 0; 
    for(int i=3;i*i<=n;i+=2) 
    { 
        if(n%i==0) return 0; 
    } 
    return 1; 
} 

int main() 
{ 
    string str1; 
    int prime; 
    while(cin>>str1) 
    { 
        prime=0; 
        for(int i=0;i<str1.size();i++) 
        { 
            if(str1[i]>='A' && str1[i]<='Z') 
            { 
                prime+=(str1[i]-'A'+27); 
            } 
            else if(str1[i]>='a' && str1[i]<='z') 
            { 
                prime+=(str1[i]-'a'+1); 
            } 
        } 
        if(isprime(prime)) cout << "It is a prime word.\n"; 
        else cout <<"It is not a prime word.\n"; 
    } 
    return 0; 
}