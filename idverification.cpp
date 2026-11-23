#include <iostream>
#include <fstream>
#include<string>
using namespace std;
string idVerification ();
int main()
{
    
cout<<idVerification();


}


string idVerification ()
{
    
    
    string user_enter_id ;
    string user_enter_pass;
    cout<<"============="<<endl;
    cout<<"SCHOLAR TRACK"<<endl;
    cout<<"============="<<endl;

    cout<<"LOGIN"<<endl;
    cout<<"          Enter ID: ";
    cin>>user_enter_id;
    cout<<"          Enter Password: ";
    cin>>user_enter_pass;

    ifstream File("login.txt");

    if (!File.is_open())
{
    return "File not found!";
}


    string saved_pass , saved_id , role;
   
    
     while(File>>saved_pass>>saved_id>>role)
     {
        if(saved_pass == user_enter_pass && saved_id == user_enter_id)
            {
                File.close();
                return role;
             }
    }
    File.close();
    return "Enter Valid ID and Password!";
    
}