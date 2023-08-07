#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a=3;
    string word[a]={"apple","ball","cat"};
    string nword[a]={
                    "Write a 5 letter word which has A",
                    "Write a 4 letter word which has B",
                    "Write a 3 letter word which has C"
                    };
    string j;
    int point;
    int p=0;
    int ctr=0;


    cout<<"Make A Word Using A Given Letter "<<endl;
    for(int i=0; i<a; i++)
    {
        cout<<nword[i]<<endl;
        cin>>j;



        ctr++;
        if(j==word[i])
        {
            cout<<"       Congratulation!        "<<endl;
            cout<<"       You Have Score:"<<" "<<i+1<<"  "<< "Point" <<endl;


        }
        else
        {
            cout<<"Wrong Better Luck Next Time! "<<endl;
        }

    }

    return 0;
}
