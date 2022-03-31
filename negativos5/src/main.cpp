#include <iostream>
using std::cin;
using std::cout;
using std::endl;


const int SIZE = 5; // input size.

int main(void)
{
    int cont = 0;
    int values[5];
    for(int n=0; n<5; n++){
        cin>>values[n];
        if(values[n]<0){
            cont++;
        }
    }
    cout<<cont<<endl;
    return 0;
}
