#include <iostream>
using namespace std;
class File
{
public:
    int Required,Start,End;

    File()
    {

    }
    void init(int i);
};
void File:: init(int i)
{
    cout<<"Enter Start block of File["<<i<<"] :";
    cin>>Start;
    cout<<"Enter Required block of File["<<i<<"] :";
    cin>>Required;

}
File Print(File P[],int N)
{
    cout<<"FileName "<<"   "<<"StartBlock"<<"  "<<"EndBlock"<<endl;
    for(int i=0;i<N;i++)
    {
        cout<<"File-"<<i;
        cout<<"          "<<P[i].Start;
        cout<<"         "<<P[i].Start+P[i].Required-1;
        cout<<endl;
    }
    return *P;
};
int main() {
    int N;
    cout<<"Enter Number of File: ";
    cin>>N;
    int T=0;
    File F[N];
    for(int i=0;i<N;i++)
    {
        F[i].init(i);
    }
    cout<<endl;
    Print(F,N);
    return 0;
}
