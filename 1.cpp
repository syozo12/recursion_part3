//tower of hanoi
#include<iostream>
using namespace std;
void tower_of_Hanoi(int n,char source,char helper,char destination){
    if(n==1){
        cout<<"move disc from "<<source<<"-->"<<destination<<endl;
        return ;
    }
    tower_of_Hanoi(n-1,source, destination,helper);
    cout<<"move disc from "<<source<<"-->"<<destination<<endl;
    tower_of_Hanoi(n-1,helper,source, destination);
    
}

int main(){
    int n=3;
    char source='a';
    char  helper='b';
    char destination='c';
    tower_of_Hanoi(n,source,helper,destination);
}
