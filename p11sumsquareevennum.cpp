#include <iostream>
using namespace std;
 int main(){
    int sqr,count=0,sum=0,sum_sqr=0;
    for(int i=1;i<=100;i++){
        if(i%2==0){
            sum+=i;
            sqr=i*i;
            sum_sqr+=sqr;
            count+=1;
        }
        if(count==15) break;
    }
    cout<<"sum of first 15 even num="<<sum<<endl;
    cout<<"sum of squares of first 15 even num="<<sum_sqr<<endl;
 }



