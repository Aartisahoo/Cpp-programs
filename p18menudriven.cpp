#include <iostream>
using namespace std;

class arithmetic_op{
    // input two 2x2 matrices
    public:int a[2][2], b[2][2],mult[10][10]={0};
    arithmetic_op();
    void add(int a[2][2], int b[2][2]);
    void diff(int a[2][2], int b[2][2]);
    void mul(int a[2][2], int b[2][2],int mult[10][10]);
    };

arithmetic_op:: arithmetic_op(){
    cout<<"Enter the elements of the first matrix: \n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements of the second matrix: \n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>b[i][j];
        }}
}
void arithmetic_op::add(int a[2][2], int b[2][2]){
    cout << "The sum is: \n";
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }
}
void arithmetic_op:: diff(int a[2][2], int b[2][2])
{cout<<"The difference is: \n";
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    cout<<a[i][j]-b[i][j]<<" ";
                }
                cout<<endl;
            }
}
void arithmetic_op::mul(int a[2][2], int b[2][2],int mult[10][10]){
    cout<<"The product is: \n";
            for(int i = 0; i < 2; ++i){
                for(int j = 0; j < 2; ++j){
                    // mult[i][j]=0;
                    for(int k = 0; k < 2; ++k){
                    mult[i][j] += a[i][k] * b[k][j];
                  }
                  cout << mult[i][j] << " ";  }
                    
            cout << endl;}}

int main(){
    cout<<"AARTI SAHOO 160172022 \n";
    arithmetic_op c1;
    cout<<"1. Addition 2. Subtraction 3. multiplicatiion \n";
    cout<<"Enter the operation you want to perform: \n";
    
    int choice;
    cin>>choice;
    // c1.getdata();
    switch(choice){
        case 1:
            c1.add(c1.a, c1.b);
            break;
        case 2:
            c1.diff(c1.a, c1.b);
            break;
        case 3:
            c1.mul(c1.a, c1.b,c1.mult);
            break;
        default:
            cout<<"Invalid choice \n";
    }   
    return 0;
}