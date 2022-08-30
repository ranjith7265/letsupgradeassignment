
#include <iostream>
using namespace std;
int mul(int e,int f){
    cout<<"\n\nMultiplication\n";
    cout<<"----------------\n";
    cout<<"Enter the first value for multiplication:";
    cin>>e;
    cout<<"\nEnter the second value for multiplicaton:";
    cin>>f;
    cout<<e<<" * "<<f<<" = "<<e*f;
    return 0;
    
}
int sub(int c, int d){
    int e,f;
    cout<<"\n\nsubraction\n";
    cout<<"------------\n";
    cout<<"Enter the First Value for subraction:";
    cin>>c;
    cout<<"\nEnter the second value for subraction:";
    cin>>d;
    cout<<c<<" - "<<d<<" = "<<c-d;
    mul(e,f);
    return 0;
}


int add(int a, int b){
    int c,d;
    cout<<"Enter the first add value:";
    cin>>a;
    cout <<"Enter teh Second add value:";
    cin>>b;
    cout<<a<<" + "<<b <<" = "<<a+b;
    sub(c,d);
    return 0;
}

int main(){
    int a,b;
    add(a,b);
}