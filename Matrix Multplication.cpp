#include <iostream>
using namespace std;

int r1;
int c1;
int r2;
int c2;

void input(){
    cout<<"Enter number of rows in table 1: ";
    cin>>r1;
    cout<<"Enter number of columns in table 1: ";
    cin>>c1;
    cout<<"Enter number of rows in table 2: ";
    cin>>r2;
    cout<<"Enter number of columns in table 2: ";
    cin>>c2;
}

int *Array_1 = new int (r1*c1);
int *Array_2 = new int (r2*c2);

void input_1(){
    for(int r = 0; r < r1; r++){
        for(int c = 0; c < c1; c++){
            cout<<"Enter value of row "<<r+1<<", column "<<c+1<<" : ";
            cin>>*(Array_1 + r * c1 + c);
        }
    }
}

void input_2(){
    for(int r = 0; r < r2; r++){
        for(int c = 0; c < c2; c++){
            cout<<"Enter value of row "<<r+1<<", column "<<c+1<<" : ";
            cin>>*(Array_2 + r * c2 + c);
        }
    }
}

void reader_1(){
    cout<<"First Matrix:"<<endl;
    for(int r = 0; r < r1; r++){
        for(int c = 0; c < c1; c++){
            cout<<*(Array_1 + r * c1 + c)<<"\t";
        }
        cout<<endl;
    }
}

void reader_2(){
    cout<<"Second Matrix:"<<endl;
    for(int r = 0; r < r2; r++){
        for(int c = 0; c < c2 ; c++){
            cout<<*(Array_2 + r * c2 + c)<<"\t";
        }
        cout<<endl;
    }
}

void multiplication(){
    if(c1 == r2){
        input_1();
        system("CLS");
        reader_1();
        input_2();
        system("CLS");
        reader_1();
        reader_2();
        cout<<"Multiplication:"<<endl;
        for(int r = 0; r < r1; r++){
            for(int c = 0; c < c2; c++){
                int multmat = 0;
                for(int a = 0; a < c1; a++){
                    multmat += (*(Array_1 + r * c1 + a))*(*(Array_2 + a * c2 + c));
                }
                cout<<multmat<<"\t";
            }
            cout<<endl;
        }
    }
    else{cout<<"The input matrices does not follow the condition of multiplication of matrix!";}
}

int main(){
    input();
    multiplication();
    system("pause");
    return 0;
}
