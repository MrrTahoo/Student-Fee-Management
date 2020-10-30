#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
#include<windows.h>
using namespace std;
int main()
{
    system ("CLS");
    system ("COLOR 0A");
    char start,payment,student,admin,end;
    char responce ('y'),br ('y'),pay ('y');
    int ch,a,b,c,d,e,f;
    int pass[4];
    string studentname;
    cout<<"Fee Management Software"<<endl;
    cout<<"Choose an account type"<<endl;
    start:
    cout<<"1. Admin"<<endl;
    cout<<"2. Student"<<endl;
    cout<<"3. Exit"<<endl;
    cout<<"Enter your choice (1-3) : ";
    cin>>ch;
    switch(ch)
    {
        do
        {
        case 1:
        {
            cout<<"Enter your password : ";
            cin>>pass[4];
            if(pass[4]==1234)
            {
                cout<<"Welcome Admin !"<<endl;
                system ("PAUSE");
                goto admin;
            }
            if(pass[4]!=1234)
            {
                cout<<"sorry wrong password"<<endl;
                cout <<"Would you like to try again Y/N ? ";
                cin>>responce;
                if (responce=='n' || responce == 'N')
                {
                    goto start;
                }
            }
            
        }
        }while(responce == 'y' || responce =='Y');
        case 2:
        {
           goto student;  
        }
        case 3:
        {
            goto end;
        }
    }
    admin:
        cout<<"                                         CLASSES FEE LIST                                   "<<endl; 
        cout<<" ___________________________________________________________________________________________"<<endl;
        cout<<"|                     Class                    |                   Fee                      |"<<endl;
        cout<<"|                    Grade 1                   |                   2300                     |"<<endl;
        cout<<"|                    Grade 2                   |                   4000                     |"<<endl;
        cout<<"|                    Grade 3                   |                   7000                     |"<<endl;
        cout<<"|______________________________________________|____________________________________________|"<<endl;
        goto start;
    student:
            cout <<"Please enter your name : ";
            cin.ignore(200,'\n');
            getline(cin,studentname);
            cout<<"Enter your roll no. : ";
            cin>>b;
            cout<<"Enter your Class : ";
            cin>>c;
                if(c==1)
                {
                    cout<<"Hey !" <<endl;
                    cout<<studentname <<" your total due fee is PKR 2300 "<<endl;
                    cout<<"Would you like to see your fee breakdown Y/N ?";
                    cin>>br;
                    if (br == 'y' || br =='Y')
                    {
                        int total1=2300;
                        cout<<" _____________________________________________________________________"<<endl;
                        cout<<"|            Tuition Fee            |               1000              |"<<endl;
                        cout<<"|            AC Charges             |               500               |"<<endl;
                        cout<<"|            Miscellaneous          |               800               |"<<endl;
                        cout<<"|___________________________________|_________________________________|"<<endl;
                        cout<<"|              Total                |               2300              |"<<endl;
                        cout<<"|___________________________________|_________________________________|"<<endl;
                    }
                    if (br =='n' || br =='N')
                    {
                        goto payment;
                    }

                }
                 if(c==2)
                {
                    int total2=4000;
                    cout<<"Hey !" <<endl;
                    cout<<studentname <<" your total due fee is PKR 4000 "<<endl;
                    cout<<"Would you like to see your fee breakdown Y/N ?";
                    cin>>br;
                    if (br == 'y' || br =='Y')
                    {
                        cout<<" _____________________________________________________________________"<<endl;
                        cout<<"|            Tuition Fee            |               3000              |"<<endl;
                        cout<<"|            AC Charges             |               500               |"<<endl;
                        cout<<"|            Miscellaneous          |               500               |"<<endl;
                        cout<<"|___________________________________|_________________________________|"<<endl;
                        cout<<"|              Total                |               4000              |"<<endl;
                        cout<<"|___________________________________|_________________________________|"<<endl;
                    }
                     if (br =='n' || br =='N')
                    {
                        goto payment;
                    }
                }
                if(c==3)
                {
                    int total3=7000;
                    cout<<"Hey !" <<endl;
                    cout<<studentname <<" your total due fee is PKR 7000 "<<endl;
                    cout<<"Would you like to see your fee breakdown Y/N ?";
                    cin>>br;
                    if (br == 'y' || br =='Y')
                    {
                        cout<<" _____________________________________________________________________"<<endl;
                        cout<<"|            Tuition Fee            |               6000              |"<<endl;
                        cout<<"|            AC Charges             |               500               |"<<endl;
                        cout<<"|            Miscellaneous          |               500               |"<<endl;
                        cout<<"|___________________________________|_________________________________|"<<endl;
                        cout<<"|              Total                |               7000              |"<<endl;
                        cout<<"|___________________________________|_________________________________|"<<endl;
                    }
                    if (br =='n' || br =='N')
                    {
                        goto payment;
                    }

                }
                payment:
                int g,h,i;
                cout <<"PLease pay the fee via ATM "<<endl;
                       int pin [4],account[13];
                        cout<<"Enter you account no. : "<<endl;
                        cin>>account[13];
                        cout<<"Enter your 4 digit pin : ";
                        cin>>pin[4];
                        if(pin[4]==2345)
                        {
                            
                            
                            cout<<"Enter amount to transfer to school account : ";
                            cin>>i;
                            if (i==2300)
                            {
                                cout<<"School fee paid. Amount successfully transferred !"<<endl;
                                 goto start;
                            }
                            if(i==4000)
                            {
                                cout<<"School fee paid. Amount successfully transferred !"<<endl;
                                 goto start;
                            }
                            if(i==7000)
                            {
                                cout<<"School fee paid. Amount successfully transferred !"<<endl;
                                 goto start;
                            }
                            else;
                            {
                                cout<<"Insufficient amount entered. Would you like to try again Y/N ? ";
                                cin>>pay;
                                if(pay == 'y' || pay == 'Y')
                                {
                                    goto payment;
                                }
                                if(pay == 'n' || pay == 'N')
                                {
                                    goto start;
                                }  
                            }
                        }
                        if(pin[4]!=2345)
                        {
                            cout<<"Invalid pin number. please try again"<<endl;
                            goto payment;
                        }
                        end:
                        {
                            cout<<"Bye";
                        }                 
                           
                             
                          
    return 0;
    }
    

































 