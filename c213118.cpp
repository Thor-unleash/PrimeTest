
#include <bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int n;
    ifstream file("input.txt");
    
    file>>n;
    file.close();
    
        int f=0;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                f=1;
                break;
            }
        }
        string m;
        if(f==1)
        m=" is a composite";
        else
        m=" is a prime";
        ofstream j;
        j.open("output.txt");
        
            j<<n<<m<<endl;
        
        j.close();

}