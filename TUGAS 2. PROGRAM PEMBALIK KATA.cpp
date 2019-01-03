#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main (int argc,char*argv[])
{
    char kata[50];
    cout<<"masukan kata :";
    cin.getline(kata,sizeof(kata));

    int pjgstring;
    pjgstring = strlen(kata);

    cout<<endl<<"setelah dibalik:\b";
    for(int i=pjgstring;i>=0;i--)
    {
        cout<<kata[i];
    }
    cout<<endl<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;

}
