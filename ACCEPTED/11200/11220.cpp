#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
   int T;  
   //freopen("input.txt","r",stdin);
   cin >> T;
   string s;
   getline(cin, s);   
   getline(cin, s);
   for(int i = 1; i <= T; i++)
   {   
      cout << "Case #" << i << ":" << endl;
      while(getline(cin, s))
      {

         if(s == "")   
         {
            //cout << endl;
            break;
         }

         istringstream sin(s);         
         string w;
         for(int j = 0; sin >> w;)
            if(j < w.size())
               cout << w[j++];
         cout << endl;
      }
	  if(i<T)cout<<"\n";
         
   }
   return 0;
}