#include<iostream>
using namespace std;

int main(){
    //Input 
    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    // Logic
    for (int i = 1; i < n; i++)
    {
        if (a[i]>a[i-1])
        {
            cout<<"Best time to buy and sell- "<<a[i]<<endl;
            break;
        }
        
    }
    
    
    
    

    return 0;
}