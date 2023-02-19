#include<iostream>
using namespace std;
int main(){
    int i,j;
    int sum;
int a[3][4];
//if you have the score we initialize like this
/*
{
 45,56,56,78,
 67,78,45,67,
 57,49,77,56
};*/
//if the user need to input the score it would look like this
 for(i=0;i<3;i++){
    cout<<"enter the marks of student "<<i+1<<"\n";
    for(j=0;j<4;j++){
        cout<<"enter the student score in subject "<<j+1<<"\n";
        cin>>a[i][j];
    }
}
for(i=0;i<3;i++){
cout<<i+1<<":";

    for(j=0;j<4;j++){
 cout<<a[i][j] <<" ";
     }


     cout<<endl;
}
return 0;
}
