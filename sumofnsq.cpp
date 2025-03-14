#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the no. upto which the sum is to be found: ";
    cin>>n;

    int sum=0;
    for (int i=1; i<=n;i++){
        sum+=i*i;
    }
    cout<<"Sum of natural numbers from 1 to "<<n<<" is "<<sum<<endl;
    return 0;
}