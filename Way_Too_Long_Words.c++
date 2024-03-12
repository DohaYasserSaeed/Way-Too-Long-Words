#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int n ;
    cin >> n ;
    vector <string> word ;
    for(int i = 0 ; i < n ; i++)
    {
        string str ;
        cin >> str ;
        word.push_back(str) ;
    }
    for(string x : word)
    {
        if(x.length() > 10 )
        {
            int count = 0 ;
            cout << x[0] ;
            for(int j = 1 ; j < x.length()-1 ; j++)
            {
                count += 1 ;
            }
            cout << count << x[x.length()-1] << endl;
        }
        else
        {
            cout << x << endl ;
        }
        
    }
}