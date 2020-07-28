#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
class public_FE_local
{
public:

void public_local_FE_Sem1()
    {
        cout<<"\n 1.Engineering Mathematics-I";
        cout<<"\n 2.Basic Civil and Environmental Engineering";
        cout<<"\n 3.Engineering graphics-I";
        cout<<"\n 4.Basic Electrical Engineering";
        cout<<"\n 5.Engineering chemistry";
        cout<<"\n 6.Fundamental programming  language-I";
    }
    void public_local_FE_Sem2()
    {
        cout<<"\n 1.Engineering Mathematics-II";
        cout<<"\n 2.Engineering Mechanics";
        cout<<"\n 3.Basic electronics Engineering";
        cout<<"\n 4.Engineering physics";
        cout<<"\n 5.Basic Mechanical engineering";
        cout<<"\n 6.Fundamental programming  language-II";
    }
};
class publi_comp_local
{
public:

    void public_local_com_se_sem1()
    {
        cout<<"\n 1. Object Oriented Programming.";
        cout<<"\n 2. Data Structure And Algorithm";
        cout<<"\n 3. Discrete Mathematics(Nirali) ";
        cout<<"\n 4. Digital Electronics And Logic Design";
        cout<<"\n 5. Computer Organization And architecture ";
    }
    public_local_com_se_sem2()
    {
          cout<<"\n 1. Advanced Data Structure.";
          cout<<"\n 2. Engineering Mathematics III";
          cout<<"\n 3. Microprocessor ";
          cout<<"\n 4. Computer Graphics";
          cout<<"\n 5. Principles Of Programming Languages  ";
    }
    public_local_com_te_sem1()
    {
          cout<<"\n 1. Theory Of Computation";
          cout<<"\n 2. Database Management systems";
          cout<<"\n 3. Software Engineering And Project Management";
          cout<<"\n 4. Information Systems And Engineering Economics";
          cout<<"\n 5. Computer Networks ";
    }
    public_local_com_te_sem2()
    {
          cout<<"\n 1. Design Analysis of Algorithm";
          cout<<"\n 2. System Programming and Operating System";
          cout<<"\n 3. Embedded Systems and Internet Of Things";
          cout<<"\n 4. Software Modelling and Design";
          cout<<"\n 5. Web Technology ";
    }
     public_local_com_be_sem1()
    {
          cout<<"\n 1. High Performance Computing";
          cout<<"\n 2.Artificial Intelligence And Robotics";
          cout<<"\n 3.  Data Analytics";
          cout<<"\n 4.Elective I";
          cout<<"\n 5. Elective II ";
    }
    public_local_com_be_sem2()
    {
          cout<<"\n 1.Machine Learning";
          cout<<"\n 2.Information And Cyber Security";
          cout<<"\n 3.Elective III";
          cout<<"\n 4. Elective IV ";
    }
};
class publi_entc_local
{
public:
    void public_local_entc_se_sem1()
    {
          cout<<"\n 1.Signals And Systems";
          cout<<"\n 2.Electronic Devices And Circuits";
          cout<<"\n 3.Electrical Circuits And Machines";
          cout<<"\n 4.Data Structure And Algorithm";
          cout<<"\n 5.Digital Electronics";
    }
    public_local_entc_se_sem2()
    {
          cout<<"\n 1.Engineering Mathematics-III";
          cout<<"\n 2.Integrated Circuits";
          cout<<"\n 3.Control Systems";
          cout<<"\n 4.Analog Communication";
          cout<<"\n 5.Object Oriented Programming";

    }
    public_local_entc_te_sem1()
    {
          cout<<"\n 1.Power Electronics and Applications";
          cout<<"\n 2.Instrumentation Systems";
          cout<<"\n 3.Electro-magnetics and Wave Propagation ";
          cout<<"\n 4.Micro-controllers and Applications ";
          cout<<"\n 5.Data Communication";
    }
    public_local_entc_te_sem2()
    {
          cout<<"\n 1.DSP and Application";
          cout<<"\n 2.Embedded Processors";
          cout<<"\n 3.Business Management and Organisation";
          cout<<"\n 4.Fundamentals of HDL";
          cout<<"\n 5.PLC and Applications";
    }
     public_local_entc_be_sem1()
    {
          cout<<"\n 1.VLSI Design And technology";
          cout<<"\n 2.Computer networks";
          cout<<"\n 3.Microwave Engineering";
          cout<<"\n 4.Elective I";
          cout<<"\n 5.Elective II";

    }
    public_local_entc_be_sem2()
    {
          cout<<"\n 1.Mobile communication";
          cout<<"\n 2.Broadband communication systems";
          cout<<"\n 3.Elective III";
          cout<<"\n 4.Elective IV";

    }
};
class publi_mech_local
{
public:
    void public_local_mech_se_sem1()
    {
          cout<<"\n 1.Engineering Mathematics-III";
          cout<<"\n 2.Thermodynamics";
          cout<<"\n 3.Strength of Materials";
          cout<<"\n 4.Manufacturing Process-I";
          cout<<"\n 5.Material Science";
    }
    public_local_mech_se_sem2()
    {
          cout<<"\n 1.Fluid Mechanics";
          cout<<"\n 2.Engineering Metallurgy";
          cout<<"\n 3.Theory Of Machines-I";
          cout<<"\n 4.Applied Thermodynamics";
    }
    public_local_mech_te_sem1()
    {
          cout<<"\n 1.Design of Machine elements I";
          cout<<"\n 2.Heat Transfer";
          cout<<"\n 3.Theory of Machines II";
          cout<<"\n 4.Turbo Machines";
          cout<<"\n 5.Metrology and Quality control";


    }
    public_local_mech_te_sem2()
    {
          cout<<"\n 1.Numerical methods and optimization";
          cout<<"\n 2.Design of Machine elements II";
          cout<<"\n 3.Refrigeration and air conditioning";
          cout<<"\n 4.Mechatronics";
          cout<<"\n 5.Manufacturing process II";


    }
     public_local_mech_be_sem1()
    {
          cout<<"\n 1.Hydraulics and Pneumatics ";
          cout<<"\n 2.CAD CAM Automation";
          cout<<"\n 3.Dynamics of machinery";
          cout<<"\n 4.Elective I";
          cout<<"\n 5.Elective II";
    }
    public_local_mech_be_sem2()
    {
              cout<<"\n 1.Energy Engineering";
              cout<<"\n 2.Mechanical System Design";
              cout<<"\n 3.Elective III";
              cout<<"\n 4.Elective IV";
    }
};
static int total=0;
int add(int p1)
{
    total=total+p1;
    return total;
}
string publication()
{
    string publica;
    cout<<"\n Enter your choice (local) ?";
    cin>>publica;
}

string semester()
{
    string sem;
    cout<<"\n enter your current semester: (semester-I or semester-II)";
    cin>>sem;
    ofstream out("BookShop",ios::app);
    out<<"\n"<<sem;
    out.close();
    return sem;
}


string year()
{
    string year;
    cout<<"\n Enter year you are studying:(SE, TE, BE) ";
    cin>>year;
    ofstream out("BookShop",ios::app);
    out<<"\n"<<year;
    out.close();
    return year;
}

class dept_fe:public public_FE_local
{
protected:
    int price_fe[5];
public:
    dept_fe()
    {
        price_fe[0]=200;
        price_fe[1]=400;
        price_fe[2]=300;
        price_fe[3]=250;
        price_fe[4]=350;
        price_fe[5]=150;
    }
    int accept_info()
    {
        char choice;

        string year1=year();
        string sem1=semester();
        string public1=publication();

        if(sem1=="semester-I"&& year1=="FE")
            {

                if(1)
                    {
                    public_local_FE_Sem1();
                    cout<<"\n do you wanna buy these books?";
                    cin>>choice;
                    ofstream out("Bookshop",ios::app);
                    out<<"\n want to buy books :"<<choice;
                    out.close();
                    if(choice=='Y')
                    {
                      try
                      {
                        public_local_FE_Sem1();

                      }
                      catch(char *str2)
                      {
                          cout<<"\n error";
                      }
                       int ch;
                        cout<<"\n\n=============================================\n\n";
                        cout<<"\n 1.Do you want to buy complete set of books ??";
                        cout<<"\n 2.Do you want to buy selected books???";
                        cout<<"\n 3.Exit";
                        cout<<"\n\n=============================================\n\n";
                        cout<<"\n Enter you choice: \n";
                        cin>>ch;

                        switch(ch)
                        {
                        case 1:
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n Total Cost of books is: Rs.1500/-";
                            cout<<"\n Thank you for visiting our shop";
                            cout<<"\n\n=============================================\n\n";
                            break;
                        case 2:
                            int n,num[4],bill;
                            string name_book[4];
                            cout<<"\n-----------------------------------------------------\n";
                            cout<<"\n How many books you want to buy";
                            cin>>n;
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n Enter book number and book name of book u want:(eg. book number: 1 book name :object_oriented_programming)";
                            for(int i=0;i<n;i++)
                            {

                                cout<<"\n book number of "<<i+1<<": ";
                                cin>>num[i];
                                cout<<"\n book name:";
                                cin>>name_book[i];
                            }
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n Books you selected are: \n";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n"<<name_book[i];
                            }
                            for(int i=0;i<5;i++)
                            {
                                for(int j=0;j<n;j++)
                                {
                                    if(i==num[j])
                                       {
                                           bill=add(price_fe[i]);
                                       }
                                }
                            }
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n your billing amount is: Rs."<<bill<<" /-";
                            ofstream out("Bookshop",ios::app);
                            out<<"\n bill:"<<bill;
                            out.close();
                            cout<<"\n THANK YOU";
                            cout<<"\n\n=============================================\n\n";
                            break;
                        }
                        return 0;
                    }

                    else if(choice=='N')
                    {
                        cout<<"\n\n========================================\n\n";
                        cout<<"\n Thank you for visiting our shop";
                        cout<<"\n\n=========================================\n\n";
                        return 0;
                    }
                }
            }
    else if(sem1=="semester-II"&& year1=="FE")
            {
                //string public1=publication();
                if(1)
                    {
                    public_local_FE_Sem2();
                    cout<<"\n-----------------------------------------------------------\n";
                    cout<<"\n do you wanna buy these books?";
                    cin>>choice;
                     ofstream out("Bookshop",ios::app);
                    out<<"\n want to buy books :"<<choice;
                    out.close();

                    if(choice=='Y')
                    {
                      try
                      {
                        public_local_FE_Sem2();

                      }
                      catch(char *str2)
                      {
                          cout<<"\n error";
                      }
                       int ch;
                       cout<<"\n\n=============================================\n\n";
                        cout<<"\n 1.Do you want to buy complete set of books ??";
                        cout<<"\n 2.Do you want to buy selected books???";
                        cout<<"\n 3.Exit";
                        cout<<"\n\n=============================================\n\n";
                        cout<<"\n Enter you choice: \n";
                        cin>>ch;
                        switch(ch)
                        {
                        case 1:
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n Total Cost of books is: Rs.1500/-";
                            cout<<"\n Thank you for visiting our shop";
                            cout<<"\n\n=============================================\n\n";
                            break;
                        case 2:
                            int n,num[4],bill;
                            string name_book[4];
                            cout<<"\n-----------------------------------------------------\n";
                            cout<<"\n How many books you want to buy";
                            cin>>n;
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n Enter book number and book name of book u want:(eg. book number: 1 book name :object_oriented_programming)";
                            for(int i=0;i<n;i++)
                            {

                                cout<<"\n book number of "<<i+1<<": ";
                                cin>>num[i];
                                cout<<"\n book name:";
                                cin>>name_book[i];
                            }
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n Books you selected are: \n";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n"<<name_book[i];
                            }
                            for(int i=0;i<5;i++)
                            {
                                for(int j=0;j<n;j++)
                                {
                                    if(i==num[j])
                                       {
                                           bill=add(price_fe[i]);
                                       }
                                }
                            }
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n your billing amount is: Rs."<<bill<<" /-";
                            cout<<"\n THANK YOU";
                            ofstream out("Bookshop",ios::app);
                            out<<"\n bill:"<<bill;
                            out.close();
                            cout<<"\n\n=============================================\n\n";
                            break;
                        }
                        return 0;
                    }
                    else if(choice=='N')
                    {
                        cout<<"\n\n========================================\n\n";
                        cout<<"\n Thank you for visiting our shop";
                        cout<<"\n\n=========================================\n\n";
                        return 0;
                    }
                }
            }
    }

};
class dept_comp:public publi_comp_local
{
protected:
    int price_comp[4];
public:
    dept_comp()
    {
        price_comp[0]=200;
        price_comp[1]=400;
        price_comp[2]=300;
        price_comp[3]=250;
        price_comp[4]=350;
    }
    int accept_info()
    {
        char choice;

        string year1=year();
        string sem1=semester();
        string public1=publication();

        if(sem1=="semester-I"&& year1=="SE")
            {

                if(1)
                    {
                    public_local_com_se_sem1();
                    cout<<"\n\n=============================================\n\n";
                    cout<<"\n do you wanna buy these books?";
                    cin>>choice;
                    ofstream out("Bookshop",ios::app);
                    out<<"\n want to buy books :"<<choice;
                    out.close();

                    if(choice=='Y')
                    {
                      try
                      {
                        public_local_com_se_sem1();

                      }
                      catch(char *str2)
                      {
                          cout<<"\n error";
                      }
                       int ch;
                        cout<<"\n\n=============================================\n\n";
                        cout<<"\n 1.Do you want to buy complete set of books ??";
                        cout<<"\n 2.Do you want to buy selected books???";
                        cout<<"\n 3.Exit";
                        cout<<"\n\n=============================================\n\n";
                        cout<<"\n Enter you choice: \n";
                        cin>>ch;

                        switch(ch)
                        {
                        case 1:
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n Total Cost of books is: Rs.1500/-";
                            cout<<"\n Thank you for visiting our shop";
                            cout<<"\n\n=============================================\n\n";
                            break;
                        case 2:
                            int n,num[4],bill;
                            string name_book[4];
                            cout<<"\n-----------------------------------------------------\n";
                            cout<<"\n How many books you want to buy";
                            cin>>n;
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n Enter book number and book name of book u want:(eg. book number: 1 book name :object_oriented_programming)";
                            for(int i=0;i<n;i++)
                            {

                                cout<<"\n book number of "<<i+1<<": ";
                                cin>>num[i];
                                cout<<"\n book name:";
                                cin>>name_book[i];
                            }
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n Books you selected are: \n";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n"<<name_book[i];
                            }
                            for(int i=0;i<5;i++)
                            {
                                for(int j=0;j<n;j++)
                                {
                                    if(i==num[j])
                                       {
                                           bill=add(price_comp[i]);
                                       }
                                }
                            }
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n your billing amount is: Rs."<<bill<<" /-";
                            cout<<"\n THANK YOU";
                            ofstream out("Bookshop",ios::app);
                            out<<"\n bill:"<<bill;
                            out.close();
                            cout<<"\n\n=============================================\n\n";
                            break;
                        }
                        return 0;
                    }
                   else if(choice=='N')
                    {
                        cout<<"\n\n========================================\n\n";
                        cout<<"\n Thank you for visiting our shop";
                        cout<<"\n\n=========================================\n\n";
                        return 0;
                    }
                }
            }
    else if(sem1=="semester-II"&& year1=="SE")
            {
                //string public1=publication();
                if(1)
                    {
                    public_local_com_se_sem2();
                    cout<<"\n-----------------------------------------------------------\n";
                    cout<<"\n do you wanna buy these books?";
                    cin>>choice;
                     ofstream out("Bookshop",ios::app);
                    out<<"\n want to buy books :"<<choice;
                    out.close();

                    if(choice=='Y')
                    {
                      try
                      {
                        public_local_com_se_sem2();

                      }
                      catch(char *str2)
                      {
                          cout<<"\n error";
                      }
                       int ch;
                       cout<<"\n\n=============================================\n\n";
                        cout<<"\n 1.Do you want to buy complete set of books ??";
                        cout<<"\n 2.Do you want to buy selected books???";
                        cout<<"\n 3.Exit";
                        cout<<"\n\n=============================================\n\n";
                        cout<<"\n Enter you choice: \n";
                        cin>>ch;
                        switch(ch)
                        {
                        case 1:
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n Total Cost of books is: Rs.1500/-";
                            cout<<"\n Thank you for visiting our shop";
                            cout<<"\n\n=============================================\n\n";
                            break;
                        case 2:
                            int n,num[4],bill;
                            string name_book[4];
                            cout<<"\n-----------------------------------------------------\n";
                            cout<<"\n How many books you want to buy";
                            cin>>n;
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n Enter book number and book name of book u want:(eg. book number: 1 book name :object_oriented_programming)";
                            for(int i=0;i<n;i++)
                            {

                                cout<<"\n book number of "<<i+1<<": ";
                                cin>>num[i];
                                cout<<"\n book name:";
                                cin>>name_book[i];
                            }
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n Books you selected are: \n";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n"<<name_book[i];
                            }
                            for(int i=0;i<5;i++)
                            {
                                for(int j=0;j<n;j++)
                                {
                                    if(i==num[j])
                                       {
                                           bill=add(price_comp[i]);
                                       }
                                }
                            }
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n your billing amount is: Rs."<<bill<<" /-";
                            cout<<"\n THANK YOU";
                            ofstream out("Bookshop",ios::app);
                            out<<"\n bill:"<<bill;
                            out.close();
                            cout<<"\n\n=============================================\n\n";
                            break;
                        }
                        return 0;
                    }
                    else if(choice=='N')
                    {
                        cout<<"\n\n========================================\n\n";
                        cout<<"\n Thank you for visiting our shop";
                        cout<<"\n\n=========================================\n\n";
                        return 0;
                    }
                }
            }

           else if(sem1=="semester-I"&& year1=="TE")
            {
                //string public1=publication();
                if(1)
                    {
                    public_local_com_te_sem1();
                    cout<<"\n---------------------------------------------------------\n";
                    cout<<"\n do you wanna buy these books?";
                    cin>>choice;
                     ofstream out("Bookshop",ios::app);
                    out<<"\n want to buy books :"<<choice;
                    out.close();

                    if(choice=='Y')
                    {
                      try
                      {
                        public_local_com_te_sem1();

                      }
                      catch(char *str2)
                      {
                          cout<<"\n error";
                      }
                       int ch;
                       cout<<"\n\n=======================================================\n";
                        cout<<"\n 1.Do you want to buy complete set of books ??";
                        cout<<"\n 2.Do you want to buy selected books???";
                        cout<<"\n 3.Exit";
                        cout<<"\n\n=======================================================\n";
                        cout<<"\n Enter you choice: \n";
                        cin>>ch;
                        switch(ch)
                        {
                        case 1:
                            cout<<"\n\n=======================================================\n";
                            cout<<"\n Total Cost of books is: Rs.1500/-";
                            cout<<"\n Thank you for visiting our shop";
                            cout<<"\n\n=======================================================\n";
                            break;
                        case 2:
                            int n,num[4],bill;
                            string name_book[4];
                            cout<<"\n\n=======================================================\n";
                            cout<<"\n How many books you want to buy";
                            cin>>n;
                            cout<<"\n Enter book number and book name of book u want:(eg. book number: 1 book name :object_oriented_programming)";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n book number of "<<i+1<<": ";
                                cin>>num[i];
                                cout<<"\n book name:";
                                cin>>name_book[i];
                            }
                            cout<<"\n\n=======================================================\n";
                            cout<<"\n Books you selected are: \n";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n"<<name_book[i];
                            }
                            for(int i=0;i<5;i++)
                            {
                                for(int j=0;j<n;j++)
                                {
                                    if(i==num[j])
                                        bill=add(price_comp[i]);
                                }
                            }
                            cout<<"\n\n=======================================================\n";
                            cout<<"\n your billing amount is: Rs."<<bill<<" /-";
                            cout<<"\n THANK YOU";
                            ofstream out("Bookshop",ios::app);
                            out<<"\n bill:"<<bill;
                            out.close();
                            cout<<"\n\n=======================================================\n";
                            break;
                        }
                        return 0;
                    }
                   else if(choice=='N')
                    {
                        cout<<"\n\n========================================\n\n";
                        cout<<"\n Thank you for visiting our shop";
                        cout<<"\n\n=========================================\n\n";
                        return 0;
                    }
                }
            }
            else if(sem1=="semester-II"&& year1=="TE")
            {
                //string public1=publication();
                if(1)
                    {
                    public_local_com_te_sem2();
                    cout<<"\n\n=======================================================\n";
                    cout<<"\n do you wanna buy these books?";
                    cin>>choice;
                     ofstream out("Bookshop",ios::app);
                    out<<"\n want to buy books :"<<choice;
                    out.close();
                    if(choice=='Y')
                    {
                      try
                      {
                        public_local_com_te_sem2();

                      }
                      catch(char *str2)
                      {
                          cout<<"\n error";
                      }
                       int ch;
                       cout<<"\n\n=======================================================\n";
                        cout<<"\n 1.Do you want to buy complete set of books ??";
                        cout<<"\n 2.Do you want to buy selected books???";
                        cout<<"\n 3.Exit";
                        cout<<"\n\n=======================================================\n";
                        cout<<"\n Enter you choice: \n";
                        cin>>ch;
                        switch(ch)
                        {
                        case 1:
                            cout<<"\n\n=======================================================\n";
                            cout<<"\n Total Cost of books is: Rs.1500/-";
                            cout<<"\n Thank you for visiting our shop";
                            cout<<"\n\n=======================================================\n";
                            break;
                        case 2:
                            int n,num[4],bill;
                            string name_book[4];
                            cout<<"\n\n=======================================================\n";
                            cout<<"\n How many books you want to buy";
                            cin>>n;
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n Enter book number and book name of book u want:(eg. book number: 1 book name :object_oriented_programming)";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n book number of "<<i+1<<": ";
                                cin>>num[i];
                                cout<<"\n book name:";
                                cin>>name_book[i];
                            }
                            cout<<"\n\n=======================================================\n";
                            cout<<"\n Books you selected are: \n";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n"<<name_book[i];
                            }
                            for(int i=0;i<5;i++)
                            {
                                for(int j=0;j<n;j++)
                                {
                                    if(i==num[j])
                                        bill=add(price_comp[i]);
                                }
                            }
                            cout<<"\n\n=======================================================\n";
                            cout<<"\n your billing amount is: Rs."<<bill<<" /-";
                            cout<<"\n THANK YOU";
                            ofstream out("Bookshop",ios::app);
                            out<<"\n bill:"<<bill;
                            out.close();
                            cout<<"\n\n=======================================================\n";
                            break;
                        }
                        return 0;
                    }
                    else if(choice=='N')
                    {
                        cout<<"\n______________________________________\n";
                        cout<<"\n Thank you for visiting our shop";
                        cout<<"\n----------------********--------------------\n";
                        return 0;
                    }
                }
            }
            else if(sem1=="semester-I"&& year1=="BE")
            {
                //string public1=publication();
                if(1)
                    {
                    public_local_com_be_sem1();
                    cout<<"\n==================================================\n";
                    cout<<"\n do you wanna buy these books?";
                    cin>>choice;
                     ofstream out("Bookshop",ios::app);
                    out<<"\n want to buy books :"<<choice;
                    out.close();

                    if(choice=='Y')
                    {
                      try
                      {
                        public_local_com_be_sem1();

                      }
                      catch(char *str2)
                      {
                          cout<<"\n error";
                      }
                       int ch;
                       cout<<"\n\n ----------------------------------------------------\n";
                        cout<<"\n 1.Do you want to buy complete set of books ??";
                        cout<<"\n 2.Do you want to buy selected books???";
                        cout<<"\n 3.Exit";
                        cout<<"\n\n========================================================\n";
                        cout<<"\n Enter you choice: ";
                        cin>>ch;
                        switch(ch)
                        {
                        case 1:
                            cout<<"\n==========================================================\n";
                            cout<<"\n Total Cost of books is: Rs.1500/-";
                            cout<<"\n Thank you for visiting our shop";
                            cout<<"\n============================================================\n";
                            break;
                        case 2:
                            int n,num[4],bill;
                            string name_book[4];
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n How many books you want to buy";
                            cin>>n;
                            cout<<"\n==============================================================\n";
                            cout<<"\n Enter book number and book name of book u want:(eg. book number: 1 book name :object_oriented_programming)";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n book number of "<<i+1<<": ";
                                cin>>num[i];
                                cout<<"\n book name:";
                                cin>>name_book[i];
                            }
                            cout<<"\n======================================================\n";
                            cout<<"\n Books you selected are: \n";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n"<<name_book[i];
                            }
                            for(int i=0;i<5;i++)
                            {
                                for(int j=0;j<n;j++)
                                {
                                    if(i==num[j])
                                        bill=add(price_comp[i]);
                                }
                            }
                            cout<<"\n===========================================================\n";
                            cout<<"\n your billing amount is: Rs."<<bill<<" /-";
                            cout<<"\n THANK YOU";
                            ofstream out("Bookshop",ios::app);
                            out<<"\n bill:"<<bill;
                            out.close();
                            cout<<"\n***************************************************************\n";
                            break;
                        }
                        return 0;
                    }
                    else if(choice=='N')
                    {
                        cout<<"\n________________________________________________________";
                        cout<<"\n Thank you for visiting our shop";
                        cout<<"\n=========================================================";
                        return 0;
                    }
                }
            }
            else if(sem1=="semester-II"&& year1=="BE")
            {
                //string public1=publication();
                if(1)
                    {
                    public_local_com_be_sem2();
                    cout<<"\n\n=============================================\n\n";
                    cout<<"\n do you wanna buy these books?";
                    cin>>choice;
                     ofstream out("Bookshop",ios::app);
                    out<<"\n want to buy books :"<<choice;
                    out.close();

                    if(choice=='Y')
                    {
                      try
                      {
                        public_local_com_be_sem2();

                      }
                      catch(char *str2)
                      {
                          cout<<"\n error";
                      }
                       int ch;
                        cout<<"\n 1.Do you want to buy complete set of books ??";
                        cout<<"\n 2.Do you want to buy selected books???";
                        cout<<"\n 3.Exit";
                        cout<<"\n Enter you choice: ";
                        cin>>ch;
                        switch(ch)
                        {
                        case 1:
                            cout<<"\n Total Cost of books is: Rs.1500/-";
                            cout<<"\n Thank you for visiting our shop";
                            break;
                        case 2:
                            int n,num[4],bill;
                            string name_book[4];
                            cout<<"\n How many books you want to buy";
                            cin>>n;
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n Enter book number and book name of book u want:(eg. book number: 1 book name :object_oriented_programming)";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n book number of "<<i+1<<": ";
                                cin>>num[i];
                                cout<<"\n book name:";
                                cin>>name_book[i];
                            }
                            cout<<"\n Books you selected are: \n";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n"<<name_book[i];
                            }
                            for(int i=0;i<5;i++)
                            {
                                for(int j=0;j<n;j++)
                                {
                                    if(i==num[j])
                                        bill=add(price_comp[i]);
                                }
                            }
                            cout<<"\n==================================================\n";
                            cout<<"\n your billing amount is: Rs."<<bill<<" /-";
                            ofstream out("Bookshop",ios::app);
                            out<<"\n bill:"<<bill;
                            out.close();
                            cout<<"\n THANK YOU";
                            cout<<"\n\n--------------------------------------------------\n";
                            break;
                        }
                        return 0;
                    }
                    else if(choice=='N')
                    {
                        cout<<"\n\n========================================\n\n";
                        cout<<"\n Thank you for visiting our shop";
                        cout<<"\n\n=========================================\n\n";
                        return 0;
                    }
                }
            }
    }

};
class dept_entc:public publi_entc_local
{
protected:
    int price_entc[4];
public:
    dept_entc()
    {
        price_entc[0]=200;
        price_entc[1]=400;
        price_entc[2]=300;
        price_entc[3]=250;
        price_entc[4]=350;
    }
    int accept_info()
    {
        char choice;

        string year1=year();
        string sem1=semester();
        string public1=publication();

        if(sem1=="semester-I"&& year1=="SE")
            {

                if(1)
                    {
                    public_local_entc_se_sem1();
                    cout<<"\n\n=============================================\n\n";
                    cout<<"\n do you wanna buy these books?";
                    cin>>choice;
                     ofstream out("Bookshop",ios::app);
                    out<<"\n want to buy books :"<<choice;
                    out.close();

                    if(choice=='Y')
                    {
                      try
                      {
                        public_local_entc_se_sem1();

                      }
                      catch(char *str2)
                      {
                          cout<<"\n error";
                      }
                       int ch;
                        cout<<"\n 1.Do you want to buy complete set of books ??";
                        cout<<"\n 2.Do you want to buy selected books???";
                        cout<<"\n 3.Exit";
                        cout<<"\n Enter you choice: ";
                        cin>>ch;

                        switch(ch)
                        {
                        case 1:
                            cout<<"\n Total Cost of books is: Rs.1500/-";
                            cout<<"\n Thank you for visiting our shop";
                            break;
                        case 2:
                            int n,num[4],bill;
                            string name_book[4];
                            cout<<"\n How many books you want to buy";
                            cin>>n;
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n Enter book number and book name of book u want:(eg. book number: 1 book name :object_oriented_programming)";
                            for(int i=0;i<n;i++)
                            {

                                cout<<"\n book number of "<<i+1<<": ";
                                cin>>num[i];
                                cout<<"\n book name:";
                                cin>>name_book[i];
                            }
                            cout<<"\n Books you selected are: \n";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n"<<name_book[i];
                            }
                            for(int i=0;i<5;i++)
                            {
                                for(int j=0;j<n;j++)
                                {
                                    if(i==num[j])
                                       {
                                           bill=add(price_entc[i]);
                                       }
                                }
                            }
                            cout<<"\n\n================================================\n\n";
                            cout<<"\n your billing amount is: Rs."<<bill<<" /-";
                            ofstream out("Bookshop",ios::app);
                            out<<"\n bill:"<<bill;
                            out.close();
                            cout<<"\n THANK YOU";
                            cout<<"\n\n===================================================\n\n";
                            break;
                        }
                        return 0;
                    }
                    else if(choice=='N')
                    {
                        cout<<"\n\n========================================\n\n";
                        cout<<"\n Thank you for visiting our shop";
                        cout<<"\n\n=========================================\n\n";
                        return 0;
                    }
                }
            }
    else if(sem1=="semester-II"&& year1=="SE")
            {
                //string public1=publication();
                if(1)
                    {
                    public_local_entc_se_sem2();
                    cout<<"\n\n=============================================\n\n";
                    cout<<"\n do you wanna buy these books?";
                    cin>>choice;
                     ofstream out("Bookshop",ios::app);
                    out<<"\n want to buy books :"<<choice;
                    out.close();

                    if(choice=='Y')
                    {
                      try
                      {
                        public_local_entc_se_sem2();

                      }
                      catch(char *str2)
                      {
                          cout<<"\n error";
                      }
                       int ch;
                        cout<<"\n 1.Do you want to buy complete set of books ??";
                        cout<<"\n 2.Do you want to buy selected books???";
                        cout<<"\n 3.Exit";
                        cout<<"\n Enter you choice: ";
                        cin>>ch;
                        switch(ch)
                        {
                        case 1:
                            cout<<"\n Total Cost of books is: Rs.1500/-";
                            cout<<"\n Thank you for visiting our shop";
                            break;
                        case 2:
                            int n,num[4],bill;
                            string name_book[4];
                            cout<<"\n How many books you want to buy";
                            cin>>n;
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n Enter book number and book name of book u want:(eg. book number: 1 book name :object_oriented_programming)";
                            for(int i=0;i<n;i++)
                            {

                                cout<<"\n book number of "<<i+1<<": ";
                                cin>>num[i];
                                cout<<"\n book name:";
                                cin>>name_book[i];
                            }
                            cout<<"\n Books you selected are: \n";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n"<<name_book[i];
                            }
                            for(int i=0;i<5;i++)
                            {
                                for(int j=0;j<n;j++)
                                {
                                    if(i==num[j])
                                       {
                                           bill=add(price_entc[i]);
                                       }
                                }
                            }
                            cout<<"\n\n===============================================\n\n";
                            cout<<"\n your billing amount is: Rs."<<bill<<" /-";
                            ofstream out("Bookshop",ios::app);
                            out<<"\n bill:"<<bill;
                            out.close();
                            cout<<"\n THANK YOU";
                            cout<<"\n\n==================================================\n\n";
                            break;
                        }
                        return 0;
                    }
                    else if(choice=='N')
                    {
                        cout<<"\n\n========================================\n\n";
                        cout<<"\n Thank you for visiting our shop";
                        cout<<"\n\n=========================================\n\n";
                        return 0;
                    }
                }
            }
           else if(sem1=="semester-I"&& year1=="TE")
            {
                //string public1=publication();
                if(1)
                    {
                    public_local_entc_te_sem1();
                    cout<<"\n\n=============================================\n\n";
                    cout<<"\n do you wanna buy these books?";
                    cin>>choice;
                     ofstream out("Bookshop",ios::app);
                    out<<"\n want to buy books :"<<choice;
                    out.close();

                    if(choice=='Y')
                    {
                      try
                      {
                        public_local_entc_te_sem1();

                      }
                      catch(char *str2)
                      {
                          cout<<"\n error";
                      }
                       int ch;
                        cout<<"\n 1.Do you want to buy complete set of books ??";
                        cout<<"\n 2.Do you want to buy selected books???";
                        cout<<"\n 3.Exit";
                        cout<<"\n Enter you choice: ";
                        cin>>ch;
                        switch(ch)
                        {
                        case 1:
                            cout<<"\n Total Cost of books is: Rs.1500/-";
                            cout<<"\n Thank you for visiting our shop";
                            break;
                        case 2:
                            int n,num[4],bill;
                            string name_book[4];
                            cout<<"\n How many books you want to buy";
                            cin>>n;
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n Enter book number and book name of book u want:(eg. book number: 1 book name :object_oriented_programming)";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n book number of "<<i+1<<": ";
                                cin>>num[i];
                                cout<<"\n book name:";
                                cin>>name_book[i];
                            }
                            cout<<"\n Books you selected are: \n";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n"<<name_book[i];
                            }
                            for(int i=0;i<5;i++)
                            {
                                for(int j=0;j<n;j++)
                                {
                                    if(i==num[j])
                                        bill=add(price_entc[i]);
                                }
                            }
                            cout<<"\n\n==============================================\n\n";
                            cout<<"\n your billing amount is: Rs."<<bill<<" /-";
                            ofstream out("Bookshop",ios::app);
                            out<<"\n bill:"<<bill;
                            out.close();
                            cout<<"\n THANK YOU";
                            cout<<"\n====================================================\n";
                            break;
                        }
                        return 0;
                    }
                    else if(choice=='N')
                    {
                        cout<<"\n\n========================================\n\n";
                        cout<<"\n Thank you for visiting our shop";
                        cout<<"\n\n=========================================\n\n";
                        return 0;
                    }
                }
            }
            else if(sem1=="semester-II"&& year1=="TE")
            {
                //string public1=publication();
                if(1)
                    {
                    public_local_entc_te_sem2();
                    cout<<"\n\n=============================================\n\n";
                    cout<<"\n do you wanna buy these books?";
                    cin>>choice;
                     ofstream out("Bookshop",ios::app);
                    out<<"\n want to buy books :"<<choice;
                    out.close();

                    if(choice=='Y')
                    {
                      try
                      {
                        public_local_entc_te_sem2();

                      }
                      catch(char *str2)
                      {
                          cout<<"\n error";
                      }
                       int ch;
                        cout<<"\n 1.Do you want to buy complete set of books ??";
                        cout<<"\n 2.Do you want to buy selected books???";
                        cout<<"\n 3.Exit";
                        cout<<"\n Enter you choice: ";
                        cin>>ch;
                        switch(ch)
                        {
                        case 1:
                            cout<<"\n Total Cost of books is: Rs.1500/-";
                            cout<<"\n Thank you for visiting our shop";
                            break;
                        case 2:
                            int n,num[4],bill;
                            string name_book[4];
                            cout<<"\n How many books you want to buy";
                            cin>>n;
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n Enter book number and book name of book u want:(eg. book number: 1 book name :object_oriented_programming)";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n book number of "<<i+1<<": ";
                                cin>>num[i];
                                cout<<"\n book name:";
                                cin>>name_book[i];
                            }
                            cout<<"\n Books you selected are: \n";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n"<<name_book[i];
                            }
                            for(int i=0;i<5;i++)
                            {
                                for(int j=0;j<n;j++)
                                {
                                    if(i==num[j])
                                        bill=add(price_entc[i]);
                                }
                            }
                            cout<<"\n\n=============================================\n";
                            cout<<"\n your billing amount is: Rs."<<bill<<" /-";
                            ofstream out("Bookshop",ios::app);
                            out<<"\n bill:"<<bill;
                            out.close();
                            cout<<"\n THANK YOU";
                            cout<<"\n\n==============================================\n\n";
                            break;
                        }
                        return 0;
                    }
                    else if(choice=='N')
                    {
                        cout<<"\n\n========================================\n\n";
                        cout<<"\n Thank you for visiting our shop";
                        cout<<"\n\n=========================================\n\n";
                        return 0;
                    }
                }
            }
            else if(sem1=="semester-I"&& year1=="BE")
            {
                //string public1=publication();
                if(1)
                    {
                    public_local_entc_be_sem1();
                    cout<<"\n\n=============================================\n\n";
                    cout<<"\n do you wanna buy these books?";
                    cin>>choice;
                     ofstream out("Bookshop",ios::app);
                    out<<"\n want to buy books :"<<choice;
                    out.close();

                    if(choice=='Y')
                    {
                      try
                      {
                        public_local_entc_be_sem1();

                      }
                      catch(char *str2)
                      {
                          cout<<"\n error";
                      }
                       int ch;
                        cout<<"\n 1.Do you want to buy complete set of books ??";
                        cout<<"\n 2.Do you want to buy selected books???";
                        cout<<"\n 3.Exit";
                        cout<<"\n Enter you choice: ";
                        cin>>ch;
                        switch(ch)
                        {
                        case 1:
                            cout<<"\n Total Cost of books is: Rs.1500/-";
                            cout<<"\n Thank you for visiting our shop";
                            break;
                        case 2:
                            int n,num[4],bill;
                            string name_book[4];
                            cout<<"\n How many books you want to buy";
                            cin>>n;
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n Enter book number and book name of book u want:(eg. book number: 1 book name :object_oriented_programming)";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n book number of "<<i+1<<": ";
                                cin>>num[i];
                                cout<<"\n book name:";
                                cin>>name_book[i];
                            }
                            cout<<"\n Books you selected are: \n";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n"<<name_book[i];
                            }
                            for(int i=0;i<5;i++)
                            {
                                for(int j=0;j<n;j++)
                                {
                                    if(i==num[j])
                                        bill=add(price_entc[i]);
                                }
                            }
                            cout<<"\n\n============================================\n\n";
                            cout<<"\n your billing amount is: Rs."<<bill<<" /-";
                            ofstream out("Bookshop",ios::app);
                            out<<"\n bill:"<<bill;
                            out.close();
                            cout<<"\n THANK YOU";
                            cout<<"\n\n===============================================\n\n";
                            break;
                        }
                        return 0;
                    }
                    else if(choice=='N')
                    {
                        cout<<"\n\n========================================\n\n";
                        cout<<"\n Thank you for visiting our shop";
                        cout<<"\n\n=========================================\n\n";
                        return 0;
                    }
                }
            }
            else if(sem1=="semester-II"&& year1=="BE")
            {
                //string public1=publication();
                if(1)
                    {
                    public_local_entc_be_sem2();
                    cout<<"\n\n=============================================\n\n";
                    cout<<"\n do you wanna buy these books?";
                    cin>>choice;
                     ofstream out("Bookshop",ios::app);
                    out<<"\n want to buy books :"<<choice;
                    out.close();

                    if(choice=='Y')
                    {
                      try
                      {
                        public_local_entc_be_sem2();

                      }
                      catch(char *str2)
                      {
                          cout<<"\n error";
                      }
                       int ch;
                        cout<<"\n 1.Do you want to buy complete set of books ??";
                        cout<<"\n 2.Do you want to buy selected books???";
                        cout<<"\n 3.Exit";
                        cout<<"\n Enter you choice: ";
                        cin>>ch;
                        switch(ch)
                        {
                        case 1:
                            cout<<"\n Total Cost of books is: Rs.1500/-";
                            cout<<"\n Thank you for visiting our shop";
                            break;
                        case 2:
                            int n,num[4],bill;
                            string name_book[4];
                            cout<<"\n How many books you want to buy";
                            cin>>n;
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n Enter book number and book name of book u want:(eg. book number: 1 book name :object_oriented_programming)";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n book number of "<<i+1<<": ";
                                cin>>num[i];
                                cout<<"\n book name:";
                                cin>>name_book[i];
                            }
                            cout<<"\n Books you selected are: \n";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n"<<name_book[i];
                            }
                            for(int i=0;i<5;i++)
                            {
                                for(int j=0;j<n;j++)
                                {
                                    if(i==num[j])
                                        bill=add(price_entc[i]);
                                }
                            }
                            cout<<"\n\n==============================================\n\n";
                            cout<<"\n your billing amount is: Rs."<<bill<<" /-";
                            ofstream out("Bookshop",ios::app);
                            out<<"\n bill:"<<bill;
                            out.close();
                            cout<<"\n THANK YOU";
                            cout<<"\n\n===============================================\n\n";
                            break;
                        }
                        return 0;
                    }
                    else if(choice=='N')
                    {
                        cout<<"\n\n========================================\n\n";
                        cout<<"\n Thank you for visiting our shop";
                        cout<<"\n\n=========================================\n\n";
                        return 0;
                    }
                }
            }
    }

};
class dept_mech:public publi_mech_local
{
protected:
    int price_mech[4];
public:
    dept_mech()
    {
        price_mech[0]=200;
        price_mech[1]=400;
        price_mech[2]=300;
        price_mech[3]=250;
        price_mech[4]=350;
    }
    int accept_info()
    {
        char choice;

        string year1=year();
        string sem1=semester();
        string public1=publication();

        if(sem1=="semester-I"&& year1=="SE")
            {

                if(1)
                    {
                    public_local_mech_se_sem1();
                    cout<<"\n\n=============================================\n\n";
                    cout<<"\n do you wanna buy these books?";
                    cin>>choice;
                     ofstream out("Bookshop",ios::app);
                    out<<"\n want to buy books :"<<choice;
                    out.close();

                    if(choice=='Y')
                    {
                      try
                      {
                        public_local_mech_se_sem1();

                      }
                      catch(char *str2)
                      {
                          cout<<"\n error";
                      }
                       int ch;
                        cout<<"\n 1.Do you want to buy complete set of books ??";
                        cout<<"\n 2.Do you want to buy selected books???";
                        cout<<"\n 3.Exit";
                        cout<<"\n Enter you choice: ";
                        cin>>ch;

                        switch(ch)
                        {
                        case 1:
                            cout<<"\n Total Cost of books is: Rs.1500/-";
                            cout<<"\n Thank you for visiting our shop";
                            break;
                        case 2:
                            int n,num[4],bill;
                            string name_book[4];
                            cout<<"\n How many books you want to buy";
                            cin>>n;
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n Enter book number and book name of book u want:(eg. book number: 1 book name :object_oriented_programming)";
                            for(int i=0;i<n;i++)
                            {

                                cout<<"\n book number of "<<i+1<<": ";
                                cin>>num[i];
                                cout<<"\n book name:";
                                cin>>name_book[i];
                            }
                            cout<<"\n Books you selected are: \n";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n"<<name_book[i];
                            }
                            for(int i=0;i<5;i++)
                            {
                                for(int j=0;j<n;j++)
                                {
                                    if(i==num[j])
                                       {
                                           bill=add(price_mech[i]);
                                       }
                                }
                            }
                            cout<<"\n\n==========================================\n\n";
                            cout<<"\n your billing amount is: Rs."<<bill<<" /-";
                            ofstream out("Bookshop",ios::app);
                            out<<"\n bill:"<<bill;
                            out.close();
                            cout<<"\n THANK YOU";
                            cout<<"\n===============================================\n";
                            break;

                        }
                        return 0;
                    }
                    else if(choice=='N')
                    {
                        cout<<"\n\n========================================\n\n";
                        cout<<"\n Thank you for visiting our shop";
                        cout<<"\n\n=========================================\n\n";
                        return 0;
                    }
                }
            }
    else if(sem1=="semester-II"&& year1=="SE")
            {
                //string public1=publication();
                if(1)
                    {
                    public_local_mech_se_sem2();
                    cout<<"\n\n=============================================\n\n";
                    cout<<"\n do you wanna buy these books?";
                    cin>>choice;
                     ofstream out("Bookshop",ios::app);
                    out<<"\n want to buy books :"<<choice;
                    out.close();

                    if(choice=='Y')
                    {
                      try
                      {
                        public_local_mech_se_sem2();

                      }
                      catch(char *str2)
                      {
                          cout<<"\n error";
                      }
                       int ch;
                        cout<<"\n 1.Do you want to buy complete set of books ??";
                        cout<<"\n 2.Do you want to buy selected books???";
                        cout<<"\n 3.Exit";
                        cout<<"\n Enter you choice: ";
                        cin>>ch;
                        switch(ch)
                        {
                        case 1:
                            cout<<"\n Total Cost of books is: Rs.1500/-";
                            cout<<"\n Thank you for visiting our shop";
                            break;
                        case 2:
                            int n,num[4],bill;
                            string name_book[4];
                            cout<<"\n How many books you want to buy";
                            cin>>n;
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n Enter book number and book name of book u want:(eg. book number: 1 book name :object_oriented_programming)";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n book number of "<<i+1<<": ";
                                cin>>num[i];
                                cout<<"\n book name:";
                                cin>>name_book[i];
                            }
                            cout<<"\n Books you selected are: \n";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n"<<name_book[i];
                            }
                            for(int i=0;i<5;i++)
                            {
                                for(int j=0;j<n;j++)
                                {
                                    if(i==num[j])
                                        bill=add(price_mech[i]);
                                }
                            }
                            cout<<"\n\n============================================\n";
                            cout<<"\n your billing amount is: Rs."<<bill<<" /-";
                            ofstream out("Bookshop",ios::app);
                            out<<"\n bill:"<<bill;
                            out.close();
                            cout<<"\n THANK YOU";
                            cout<<"\n\n==============================================\n\n";
                            break;
                        }
                        return 0;
                    }
                   else if(choice=='N')
                    {
                        cout<<"\n\n========================================\n\n";
                        cout<<"\n Thank you for visiting our shop";
                        cout<<"\n\n=========================================\n\n";
                        return 0;
                    }
                }
            }
           else if(sem1=="semester-I"&& year1=="TE")
            {
                //string public1=publication();
                if(1)
                    {
                    public_local_mech_te_sem1();
                    cout<<"\n\n=============================================\n\n";
                    cout<<"\n do you wanna buy these books?";
                    cin>>choice;
                     ofstream out("Bookshop",ios::app);
                    out<<"\n want to buy books :"<<choice;
                    out.close();

                    if(choice=='Y')
                    {
                      try
                      {
                        public_local_mech_te_sem1();

                      }
                      catch(char *str2)
                      {
                          cout<<"\n error";
                      }
                       int ch;
                       cout<<"\n\n=============================================\n\n";
                        cout<<"\n 1.Do you want to buy complete set of books ??";
                        cout<<"\n 2.Do you want to buy selected books???";
                        cout<<"\n 3.Exit";
                        cout<<"\n Enter you choice: \n";
                        cin>>ch;
                        switch(ch)
                        {
                        case 1:
                            cout<<"\n Total Cost of books is: Rs.1500/-";
                            cout<<"\n Thank you for visiting our shop";
                            break;
                        case 2:
                            int n,num[4],bill;
                            string name_book[4];
                            cout<<"\n How many books you want to buy";
                            cin>>n;
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n Enter book number and book name of book u want:(eg. book number: 1 book name :object_oriented_programming)";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n book number of "<<i+1<<": ";
                                cin>>num[i];
                                cout<<"\n book name:";
                                cin>>name_book[i];
                            }
                            cout<<"\n Books you selected are: \n";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n"<<name_book[i];
                            }
                            for(int i=0;i<5;i++)
                            {
                                for(int j=0;j<n;j++)
                                {
                                    if(i==num[j])
                                        bill=add(price_mech[i]);
                                }
                            }
                            cout<<"\n\n===========================================\n\n";
                            cout<<"\n your billing amount is: Rs."<<bill<<" /-";
                            ofstream out("Bookshop",ios::app);
                            out<<"\n bill:"<<bill;
                            out.close();
                            cout<<"\n THANK YOU";
                            cout<<"\n\n=============================================\n\n";
                            break;
                        }
                        return 0;
                    }
                    else if(choice=='N')
                    {
                        cout<<"\n\n========================================\n\n";
                        cout<<"\n Thank you for visiting our shop";
                        cout<<"\n\n=========================================\n\n";
                        return 0;
                    }
                }
            }
            else if(sem1=="semester-II"&& year1=="TE")
            {
                //string public1=publication();
                if(1)
                    {
                    public_local_mech_te_sem2();
                    cout<<"\n\n=============================================\n\n";
                    cout<<"\n do you wanna buy these books?";
                    cin>>choice;
                     ofstream out("Bookshop",ios::app);
                    out<<"\n want to buy books :"<<choice;
                    out.close();

                    if(choice=='Y')
                    {
                      try
                      {
                        public_local_mech_te_sem2();

                      }
                      catch(char *str2)
                      {
                          cout<<"\n error";
                      }
                       int ch;
                       cout<<"\n\n=============================================\n\n";
                        cout<<"\n 1.Do you want to buy complete set of books ??";
                        cout<<"\n 2.Do you want to buy selected books???";
                        cout<<"\n 3.Exit";
                        cout<<"\n Enter you choice: ";
                        cin>>ch;
                        switch(ch)
                        {
                        case 1:
                            cout<<"\n Total Cost of books is: Rs.1500/-";
                            cout<<"\n Thank you for visiting our shop";
                            break;
                        case 2:
                            int n,num[4],bill;
                            string name_book[4];
                            cout<<"\n How many books you want to buy";
                            cin>>n;
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n Enter book number and book name of book u want:(eg. book number: 1 book name :object_oriented_programming)";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n book number of "<<i+1<<": ";
                                cin>>num[i];
                                cout<<"\n book name:";
                                cin>>name_book[i];
                            }
                            cout<<"\n Books you selected are: \n";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n"<<name_book[i];
                            }
                            for(int i=0;i<5;i++)
                            {
                                for(int j=0;j<n;j++)
                                {
                                    if(i==num[j])
                                        bill=add(price_mech[i]);
                                }
                            }
                            cout<<"\n\n============================================\n\n";
                            cout<<"\n your billing amount is: Rs."<<bill<<" /-";
                            ofstream out("Bookshop",ios::app);
                            out<<"\n bill:"<<bill;
                            out.close();
                            cout<<"\n THANK YOU";
                            cout<<"\n\n==============================================\n\n";
                            break;
                        }
                        return 0;
                    }
                    else if(choice=='N')
                    {
                        cout<<"\n\n========================================\n\n";
                        cout<<"\n Thank you for visiting our shop";
                        cout<<"\n\n=========================================\n\n";
                        return 0;
                    }
                }
            }
            else if(sem1=="semester-I"&& year1=="BE")
            {
                //string public1=publication();
                if(1)
                    {
                    public_local_mech_be_sem1();
                    cout<<"\n\n=============================================\n\n";
                    cout<<"\n do you wanna buy these books?";
                    cin>>choice;
                     ofstream out("Bookshop",ios::app);
                    out<<"\n want to buy books :"<<choice;
                    out.close();

                    if(choice=='Y')
                    {
                      try
                      {
                        public_local_mech_be_sem1();

                      }
                      catch(char *str2)
                      {
                          cout<<"\n error";
                      }
                       int ch;
                        cout<<"\n 1.Do you want to buy complete set of books ??";
                        cout<<"\n 2.Do you want to buy selected books???";
                        cout<<"\n 3.Exit";
                        cout<<"\n Enter you choice: ";
                        cin>>ch;
                        switch(ch)
                        {
                        case 1:
                            cout<<"\n Total Cost of books is: Rs.1500/-";
                            cout<<"\n Thank you for visiting our shop";
                            break;
                        case 2:
                            int n,num[4],bill;
                            string name_book[4];
                            cout<<"\n How many books you want to buy";
                            cin>>n;
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n Enter book number and book name of book u want:(eg. book number: 1 book name :object_oriented_programming)";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n book number of "<<i+1<<": ";
                                cin>>num[i];
                                cout<<"\n book name:";
                                cin>>name_book[i];
                            }
                            cout<<"\n Books you selected are: \n";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n"<<name_book[i];
                            }
                            for(int i=0;i<5;i++)
                            {
                                for(int j=0;j<n;j++)
                                {
                                    if(i==num[j])
                                        bill=add(price_mech[i]);
                                }
                            }
                            cout<<"\n\n============================================\n\n";
                            cout<<"\n your billing amount is: Rs."<<bill<<" /-";
                            ofstream out("Bookshop",ios::app);
                            out<<"\n bill:"<<bill;
                            out.close();
                            cout<<"\n THANK YOU";
                            cout<<"\n\n============================================\n\n";
                            break;
                        }
                        return 0;
                    }
                    else if(choice=='N')
                    {
                        cout<<"\n\n========================================\n\n";
                        cout<<"\n Thank you for visiting our shop";
                        cout<<"\n\n=========================================\n\n";
                        return 0;
                    }
                }
            }
            else if(sem1=="semester-II"&& year1=="BE")
            {
                //string public1=publication();
                if(1)
                    {
                    public_local_mech_be_sem2();
                    cout<<"\n\n=============================================\n\n";
                    cout<<"\n do you wanna buy these books?";
                    cin>>choice;
                     ofstream out("Bookshop",ios::app);
                    out<<"\n want to buy books :"<<choice;
                    out.close();

                    if(choice=='Y')
                    {
                      try
                      {
                        public_local_mech_be_sem2();

                      }
                      catch(char *str2)
                      {
                          cout<<"\n error";
                      }
                       int ch;
                        cout<<"\n\n=============================================\n\n";
                        cout<<"\n 1.Do you want to buy complete set of books ??";
                        cout<<"\n 2.Do you want to buy selected books???";
                        cout<<"\n 3.Exit";
                        cout<<"\n Enter you choice: ";
                        cin>>ch;
                        switch(ch)
                        {
                        case 1:
                            cout<<"\n Total Cost of books is: Rs.1500/-";
                            cout<<"\n Thank you for visiting our shop";
                            break;
                        case 2:
                            int n,num[4],bill;
                            string name_book[4];
                            cout<<"\n How many books you want to buy";
                            cin>>n;
                            cout<<"\n\n=============================================\n\n";
                            cout<<"\n Enter book number and book name of book u want:(eg. book number: 1 book name :object_oriented_programming)";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n book number of "<<i+1<<": ";
                                cin>>num[i];
                                cout<<"\n book name:";
                                cin>>name_book[i];
                            }
                            cout<<"\n Books you selected are: \n";
                            for(int i=0;i<n;i++)
                            {
                                cout<<"\n"<<name_book[i];
                            }
                            for(int i=0;i<5;i++)
                            {
                                for(int j=0;j<n;j++)
                                {
                                    if(i==num[j])
                                        bill=add(price_mech[i]);
                                }
                            }
                            cout<<"\n\n===================================================\n\n";
                            cout<<"\n your billing amount is: Rs."<<bill<<" /-";
                            ofstream out("Bookshop",ios::app);
                            out<<"\n bill:"<<bill;
                            out.close();
                            cout<<"\n THANK YOU";
                            cout<<"\n\n=====================================================\n\n";
                            break;
                        }
                        return 0;
                    }
                    else if(choice=='N')
                    {
                        cout<<"\n\n========================================\n\n";
                        cout<<"\n Thank you for visiting our shop";
                        cout<<"\n\n=========================================\n\n";
                        return 0;
                    }
                }
            }
    }

};
class confirm_fe:public dept_fe
{
public:
    void accept()
    {
        cout<<"\n WELCOME TO COMPUTER DEPARTMENT SECTION";
        dept_fe::accept_info();
        return;
    }
};
class confirm_comp:public dept_comp
{
public:
    void accept()
    {
        cout<<"\n WELCOME TO COMPUTER DEPARTMENT SECTION";
        dept_comp::accept_info();
        return;
    }
};
class confirm_entc:public dept_entc
{
public:
    void accept()
    {
        cout<<"\n WELCOME TO E&TC DEPARTMENT SECTION";
        dept_entc::accept_info();
        return;
    }
};
class confirm_mech:public dept_mech
{
public:
    int accept()
    {
        cout<<"\n WELCOME TO MECHANICAL DEPARTMENT SECTION";

        dept_mech::accept_info();
        return 0;

    }
};
class call:public confirm_fe, public confirm_comp,public confirm_entc,public confirm_mech
{
    public:
    void calling()
    {
        string name;
        cout<<"\n Enter your name:\t";
        cin>>name;
        ofstream out("BookShop",ios::app);
        out<<"\n"<<name;
        out.close();
    int ch;
    do
        {
            cout<<"\n 1.FIRST YEAR DEPARTMENT";
            cout<<"\n 2.COMPUTER DEPARTMENT";
            cout<<"\n 3.E&TC DEPARTMENT";
            cout<<"\n 4.MECHANICAL DEPARTMENT";
            cout<<"\n ENTER YOUR CHOICE";
            cin>>ch;
            switch(ch)
            {
            case 1:
                confirm_fe::accept();
                break;
            case 2:
                confirm_comp::accept();
                break;
            case 3:
                confirm_entc::accept();
                break;
            case 4:
                confirm_mech::accept();
            default:
                cout<<"\n Please Enter your choice again";
            }
        }while(ch!=4);
        return;
    }
};

int main()
{
   call c;
   c.calling();
return 0;
}
