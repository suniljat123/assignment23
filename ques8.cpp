 #include<iostream>
using namespace std;
int main()
{
    float a,b,s;
    cout<<"Enter 2 numbers=";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"A="<<a<<endl<<"B="<<b;
    return 0;
}
