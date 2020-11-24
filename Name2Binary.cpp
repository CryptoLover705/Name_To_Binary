//input your name and see it in bin base

/*

algorithm for this programme is:

1. convert each character to its decimal representation

2. convert the decimal represntation to binary represntation

3. output '0' (in computers, each character needs 1 byte = 8 bits so,when you convert it to binary representation  you need to complete the missing bits)


*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    for(int i=0;i<int(a.size());i++)
    {
    
        //convert each character to its decimal representation
        int b=int(a[i]);
        vector<int> c;
        
        //convert from dec to bin
        while(b!=0)
        {
            c.push_back(b%2);
            b/=2;
        }
        
        //your name characters
        cout<<a[i]<<" = ";
        
        //completing the missing bits
        for(int j=0;j<int(8-c.size());j++)
            cout<<0;
        
        //the output
        for(int j=c.size()-1;j>=0;j--)
            cout<<c[j];
        cout<<"\n";
    }
    cout<<"\nForks and Pull Requests are always welcome.";
    return 0;
}
