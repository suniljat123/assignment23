 #include<iostream>
using namespace std;
int main()
{
    int a[10],s=0,i;
    cout<<"Enter 10 numbers=";
    for(i=0;i<10;i++)
        cin>>a[i];
    for(i=0;i<10;i++)
        s=s+a[i];
        cout<<"Sum of 10 Numbers="<<s;
    return 0;
}
