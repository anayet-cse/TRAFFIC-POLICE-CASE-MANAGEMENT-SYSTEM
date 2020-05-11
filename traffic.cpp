#include<bits/stdc++.h>
using namespace std;
#include"components.h"

int login();
void mainpage();
void Date1();
void delay();
void callExit();

int login()
{
    char username[30];
    char password[30];
    int true1 = 1;
    int try1 = 0;
    int i=0;
    do
    {
        system("cls");
        cout << "\n\n\n\n\n\n";
        cout <<"\t\t\t\t    ---------------------------------------\n";
        cout <<"\t\t\t\t    |TRAFFIC POLICE CASE MANAGEMENT SYSTEM|\n";
        cout <<"\t\t\t\t    ---------------------------------------\n";
        cout <<"\n\n";
        cout << "\t\t\t\t\t";
        cout << "Username : ";
        cin >> username;
        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";
        cout << "Password : ";
        cin >> password;
        if(strcmp(username,"ju-cse")==0 && strcmp(password,"cse-27")==0)
        {
            cout << "\n\n";
            cout << "\t\t\t\t";
            cout << "You are accessed to the system!\n\n";
            cout << "\t\t\t\t";
            system("pause");
            system("cls");
            true1 = 0;
            return 1;
        }
        else
        {
            system("cls");
            try1 = try1+1;
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout << "\t\t\t\t\t";
            cout << "No. of attempts remain: " << 3-try1;
            cout << "\n\n";
            cout << "\t\t\t\t";
            system("pause");
            if(try1>=3)
            {
                cout << "\t\t\t\t\t\t";
                cout << "\n";
                cout << "\t\t\t\t";
                cout << "No permission to enter the system!\n\n";
                cout << "\t\t\t\t";
                system("pause");
                callExit();
            }
        }
    }
    while(try1<3);
}

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

void mainpage()
{
    int process=0;
    system("cls");
    Date1();
    cout << "\n";
    cout <<"\t\t\t\t    ---------------------------------------\n";
    cout <<"\t\t\t\t    |TRAFFIC POLICE CASE MANAGEMENT SYSTEM|\n";
    cout <<"\t\t\t\t    ---------------------------------------\n";
    cout <<"\n\n";
    cout <<"\t\t\t\t";
    cout <<"Prepared By    ";
    cout <<":";
    cout <<"   Anayet Ullah";
    cout <<"\n\n";
    cout <<"\t\t\t\t";
    cout <<"Email          ";
    cout <<":";
    cout <<"   anayet.cse@gmail.com";
    cout <<"\n\n";
    cout <<"\t\t\t\t";
    cout <<"\n\n";
    cout <<"\n\n";
    cout <<"\t\t\t\t";
    system("pause");
    cout <<"\n\t\t\t\tLoading";

    for(process=0; process<25; process++)
    {
        delay(150);
        cout <<".";
    }
}

void callExit()
{
    int process = 0;
    system("cls");
    cout << "\n\n\n\n\n";
    cout << "\n\tTaking You Out of The System";
    for(process=0; process<25; process++)
    {
        delay(150);
        cout <<".";
    }
    system("cls");
    cout <<"\n\n\n\n\n\n\n\n\n\n\n";
    cout <<"\t\t\t\t\t";
    cout <<"You are out of the System.\n";
    cout <<"\t\t\t\t\t\t";
    cout << "Thank You !";
    cout <<"\n\n";
    cout <<"\t\t\t\t\t";
    system("pause");
    exit(0);
}

void Date1()
{
    time_t T= time(NULL);
    struct  tm tm = *localtime(&T);
    cout << "\n\n\n";
    cout << "\t\t\t\t\t   Date:" << tm.tm_mday << "/" << tm.tm_mon+1  << "/" << tm.tm_year+1900 << "\n";
}

void menu(driver l)
{
    int input;
    while(true)
    {
        system("cls");
        cout << "\n\n\n";
        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t    ---------------------------------------\n";
        cout << "\t\t\t\t    |TRAFFIC POLICE CASE MANAGEMENT SYSTEM|\n";
        cout << "\t\t\t\t    ---------------------------------------\n";
        cout << "\n\n\n\n";
        cout << "\t\t\t\t";
        cout << " 1. ADD RECORD\n\n";
        cout << "\t\t\t\t";
        cout << " 2. MODIFY RECORD\n\n" ;
        cout << "\t\t\t\t" ;
        cout << " 3. DISPLAY RECORD\n\n" ;
        cout << "\t\t\t\t" ;
        cout << " 4. DELETE RECORD\n\n" ;
        cout << "\t\t\t\t" ;
        cout << " 5. LIST ALL RECORDS\n\n" ;
        cout << "\t\t\t\t" ;
        cout << " 6. EXIT\n\n" ;
        cout << "\t\t\t\t" ;
        cout << "Choose Option:[1/2/3/4/5/6] : " ;
        fflush(stdin);
        cin >> input;
        switch(input)
        {
        case 1:
        {
            l.input();
            break;
        }
        case 2 :
        {
            l.modify();
            break;
        }
        case 3:
        {
            l.display();
            break;
        }
        case 4:
        {
            l.remove() ;
            break;
        }
        case 5:
        {
            l.list();
            break;
        }
        case 6:
        {
            callExit();
        }
        break;

        default:
        {
            cout << "\n\n\n" ;
            cout << "\t\t\t\t" ;
            cout << "      Invalid input!" ;
            cout << "\n\n" ;
            cout << "\t\t\t\t" ;
            fflush(stdin);
            getchar();
            menu(l);
        }
        }
    }
}

int driver::ncheck (char arr[])
{
    int i=0;
    while (arr[i]!='\0')
    {
        if (((arr[i] > 64) && (arr[i] < 92)) || ((arr[i] > 95) && (arr[i] < 124)) || (arr[i] ==' '))
        {
            i++;
            continue;
        }
        else
        {
            cout << "\n\tIncorrect input. Try again !\n ";
            return 0;
        }
    }
    return 1;
}

int driver::s_check(char a[])
{
    if(( (a[0]=='m')||(a[0]=='f')||(a[0]=='M')||(a[0]=='F'))&&(a[1]=='\0') )
    {
        return 1;
    }
    else
    {
        cout << "\n\tIncorrect input. Try again !\n";
        return 0;
    }
}

void driver::input()
{
    system("cls");
    this->empty();
    driver x;
    int c = 0 ;
    fflush(stdin);
    fstream filin;
    filin.open("info.txt",ios::app);
    while(c != 1)
    {
        cout << "\n\n\n\tENTER THE LINCE NO : ";
        cin >> (this->licence);
        c = x.licencecheck(this->licence);
        fflush(stdin);
    }
    c = 0;
    cout <<"\n\n    ENTER THE DRIVER DETAILS\n";
    while(c != 1)
    {
        cout  << "\n" << setw(10) <<"\tNAME    : ";
        cin >> (this->name);
        c = ncheck(this->name);
    }
    fflush(stdin);
    c = 0;
    while(c != 1)
    {
        cout << "\n" << setw(10) << "\tSEX      : ";
        cin >> (this->sex);
        c = s_check(this->sex);
    }
    fflush(stdin);
    cout << "\n" << setw(10) << "\tAGE          : ";
    cin >> (this->age);
    fflush(stdin);
    cout << "\n" << setw(10) << "\tNID NO       : ";
    cin >> (this->nid);
    fflush(stdin);
    cout << "\n" << setw(10) << "\tMOBILE NO    : ";
    cin >> (this->mobile);
    cout <<"\n\n   ENTER THE CAR DETAILS\n";
    fflush(stdin);
    cout <<"\n\n\tLICENCE NO                    : ";
    cin >> (this->car.car_lic);
    fflush(stdin);
    cout << "\n\tMODEL                          : ";
    cin >> (this->car.model);
    fflush(stdin);
    c = 0;
    while(c != 1)
    {
        cout << "\n\tIMPORTED COUNTRY : ";
        cin >> (this->car.country);
        c = ncheck(this->car.country);
    }
    system("cls");
    cout << "\n    ENTER INCIDENT DETAILS\n\n\t ";
    fflush(stdin);
    c = 0;
    while(c != 1)
    {
        cout<<"\n\tPLACE : ";
        cin >> (this->des.place);
        c = ncheck(this->des.place);
    }
    fflush(stdin);
    c = 0;
    while(c != 1)
    {
        cout << "\n\tINCIDENT DESCRIPTION : ";
        cin >> (this->des.incident);
        c = ncheck(this->des.incident);
    }
    system("cls");
    cout << "\n\n    ENTER TRAFFIC POLICE ZONE INFORMATION \n\n\t\t ";
    cout << "\n\n\n\t\t";
    fflush(stdin);
    cout << "\n\t\tTRAFFIC POLICE ZONE : ";
    cin >> (this->POLICE.station);
    cout <<"\n\t\tFIR NO. : ";
    fflush(stdin);
    cin >> (this->POLICE.fir_no);
    cout <<"\n\t\tDate OF CASE(DD/MM/YYYY)\n";
    fflush(stdin);
    c = 0;
    while(!c)
    {
        cout << "\n\t\t\t\t\t Day : ";
        cin >> this->POLICE. d;
        if((this->POLICE. d>31) || (this->POLICE. d<1))
        {
            cout << "\n\t\tTHIS Date DOES NOT EXIST, TRY AGAIN!!\n";
            c = 0;
        }
        else
            c = 1;
    }
    c = 0;
    fflush(stdin);
    while(!c)
    {
        cout << "\n\t\t\t\t\t Month : ";
        cin >> this->POLICE. m;
        if((this->POLICE. m>12) || (this->POLICE. m<1))
        {
            cout << "\n\t\tTHIS MONTH DOES NOT EXIST, TRY AGAIN!!\n";
            c = 0;
            continue;
        }
        else
            c = 1;

        if((this->POLICE. d==31) && ((this->POLICE. m==2) || (this->POLICE. m==4) ||( this->POLICE. m==6) ||( this->POLICE. m==9) || (this->POLICE. m==11)))
        {
            cout <<"\n\t\tTHIS MONTH DOES NOT HAVE 31 DAYS \n\tTRY AGAIN !!\n";
            c = 0;
        }
        else
            c = 1;
    }
    fflush(stdin);
    c = 0;
    while(!c)
    {
        cout << "\n\t\t\t\t\t Year(4 digits) : ";
        cin >> this->POLICE. y;
        if((this->POLICE. y <= 1930)||(this->POLICE. y>2020))
        {
            cout << "\n\t\tINCORRECT INPUT, TRY AGAIN!!\n";
            c = 0;
        }
        else
            c = 1;
    }
    char ch;
    do
    {
        cout << "\n\tDO YOU WANT TO SAVE THIS INFORMATION(Y/N) : ";
        cin >> ch;
        if(ch=='y'||ch=='Y')
        {
            cout << "\n\n\t< RECORD HAS BEEN SAVED >";
            filin.write((char*)this,sizeof(driver));
        }
        else
        {
            if((ch!='n')&&(ch!='N'))
            {
                cout<<"\n\t\tENTER CORRECTLY \n\t\t TRY AGAIN !!\n\n";
            }
        }
    }
    while((ch!='y') && (ch!='Y') && (ch!='n') && (ch!='N'));
    filin.close();
    cout << "\n\n\t\t";
    system("pause");
}

void driver::output()
{
    system("cls");
    fflush(stdin);
    cout << "\n\n\t\t----------PERSONAL RECORD OF DRIVER'S----------";
    cout << "\n\n\tLICENCE            :\t";
    puts(licence);
    cout << "\n\tNAME                 :\t";
    puts(this->name);
    cout << "\n\tSEX                  :\t" << this->sex;
    cout << "\n\tAGE                  :\t";
    puts(this->age);
    cout << "\n\n\tNID NO             :\t";
    puts(this->nid);
    cout << "\n\tMOBILE NO                  :\t";
    puts(this->mobile);
    cout << "\n\n\n\t\t\t";

    system("pause");
    system("cls");

    cout << "\n\n\t\t----------CAR'S RECORD----------";
    cout << "\n\t1.LICENCE NO                  :\t";
    puts(this->car.car_lic);
    cout << "\n\t2.MODEL NO                    :\t";
    puts(this->car.model);
    cout << "\n\t3. IMPORTED COUNTRY           :\t";
    puts(this->car.country);
    cout << "\n\n\n\t\t\t";
    system("pause");
    system("cls");

    cout << "\n\n\t\t\tDESCRIPTION\n";
    cout << "\n\t1. PLACE    :\t";
    puts(this->des.place);
    cout << "\n\t2. INCIDENT DESCRIPTION                :\t";
    puts(this->des.incident);
    system("pause");
    system("cls");

    cout << "\n\n\n\t\tTRAFFIC POLICE INFORMATION \n\n";
    cout << "\n\t1. TRAFFIC POLICE ZONE    :\t";
    puts(this->POLICE.station);
    cout << "\n\t2. FIR NO.           :\t";
    puts(this->POLICE.fir_no);
    cout << "\n\t3. Date OF CASE    :\t" << this->POLICE. d <<"/" << POLICE. m << "/"<<this->POLICE. y;
    cout << "\n\n\n\t\t\t";
    system("pause");
}

void driver::delete_rec(char con_no[])
{
    fstream filin;
    fflush(stdin);
    filin.open("info.txt",ios::in|ios::ate);
    int q = filin.tellg();
    int c = q/sizeof(driver);
    fstream temp;
    temp.open("temp.txt",ios::out);
    filin.seekg(0,ios::beg);
    for(int i=0; i<c; i++)
    {
        filin.read((char*)this,sizeof(driver));
        if(strcmp(con_no,licence) != 0)
            temp.write((char*)this,sizeof(driver));
    }
    filin.close();
    temp.close();
    filin.open("info.txt",ios::out);
    temp.open("temp.txt",ios::in|ios::ate);
    int a = temp.tellg();
    int size = a/sizeof(driver);
    temp.seekg(0,ios::beg);
    for(int k=0; k<size; k++)
    {
        temp.read((char*)this,sizeof(driver));
        filin.write((char*)this,sizeof(driver));
    }
    filin.close();
    temp.close();
    cout<<"\n\n\t\t< THE RECORD HAS BEEN DELETED >";
    cout <<"\n";
    fflush(stdin);
    getchar();
}

int driver::dcheck(char n[])
{
    system("cls");
    fstream file;
    file.open("info.txt",ios::in|ios::ate|ios::binary);
    int x = 0, count = 0, c;
    int q = file.tellg();
    c = q/sizeof(driver);
    file.close();
    file.open("info.txt",ios::in|ios::binary);
    for(int i=0; i<c; i++)
    {
        file.read((char*)this,sizeof(driver));
        count++;
        if(strcmp(n,licence)==0)
        {
            x++;
            break;
        }
    }
    if(x==0)
    {
        cout<<"\n\n\n\n\tLICENCE NO. NOT FOUND!! ";
        getchar();
        return 0;
    }
    else
    {
        return count;
    }
    file.close();
}

void driver::display()
{
    system("cls");
    fflush(stdin);
    char N[10];
    int rec;
    int loc;
    cout << "\n\n\n\t\tENTER THE LICENCE NO : ";
    gets(N);
    fstream file;
    rec = this->dcheck(N);
    file.open("info.txt",ios::in|ios::binary);
    if(rec!=0)
    {
        loc = (rec-1)*sizeof(driver);
        file.seekg(loc);
        file.read((char*)this,sizeof(driver));
        this->output();
    }
    file.close();
    cout <<"\n";
    fflush(stdin);
}

void driver::remove()
{
    fflush(stdin);
    system("cls");
    char no[10];
    int s;
    cout << "\n\n\n\t\tENTER THE LICENCE NO : ";
    gets(no);
    s = this->dcheck(no);
    if(s!=0)
        this->delete_rec(no);
}

void driver::modify()
{
    system("cls");
    fflush(stdin);
    fstream file;
    char ncountry[10], nmodel[10], ncar[10], nzone[10], nfir[10],lic[10],str[10];
    int check,loc;
    driver x;
    Date D;
    fflush(stdin);
modify_start:
    cout << "\n\tENTER LICENCE NO : ";
    gets(str);
    check = this->dcheck(str);
    if(check != 0)
    {
        file.open("info.txt",ios::out|ios::ate);
        int d = 0;
        cout << "\n\n\t\tRECORD FOUND !\n\n";
        cout << "\n\tENTER MODIFIED DETAILS\n";
        while(d != 1)
        {
            cout << "\n\t\t\t\tLICENCE NO : ";
            cin >> lic;
            d = x.licencecheck(lic);
        }
        strcpy(licence,lic);
        cout << "\n\t\t\t\tMODEL NO     : ";
        cin >> nmodel;
        strcpy(car.country,ncountry);
        cout << "\n\t\t\t\tIMPORTED COUNTRY   : ";
        cin >>ncountry ;
        system("cls");
        cout << "\n\t\tENTER THE  MODIFIED TRAFFIC POLICE RECORD\n";
        cout << "\n\t\t\t\tZONE : ";
        cin >> nzone;
        strcpy(POLICE.station,nzone);
        cout << "\n\t\t\t\tFIR NO   : ";
        cin >> nfir;
        strcpy(POLICE.fir_no,nfir);
        cout << "\n\t\t\t\tDate OF CASE(DD,MM,YYYY)  ";
        int c = 0;
        while(c != 1)
        {
            cout<<"\n\t\t\t\t\t Day : ";
            cin>>D.d;
            if((D.d>31)||(D.d<1))
            {
                cout << "\n\t\tTHIS Date DOES NOT EXIST, TRY AGAIN!!\n";
                c = 0;
            }
            else
                c = 1;
        }
        c = 0;
        while(c != 1)
        {
            cout<<"\n\t\t\t\t\t Month : ";
            cin >> D.m;
            if((D.m>12)||(D.m<1))
            {
                cout << "\n\t\tTHIS MONTH DOES NOT EXIST, TRY AGAIN!!\n";
                c = 0;
                continue;
            }
            else
                c=1;

            if((D.d==31) &&((D.m==2) || (D.m==4) ||( D.m==6) ||( D.m==9) || (D.m==11)))
            {
                cout <<"\n\t\tTHIS MONTH DOES NOT HAVE 31 DAYS \n\tTRY AGAIN !!\n";
                c = 0;
            }
            else
                c = 1;
        }
        c = 0;
        while(c != 1)
        {
            cout<<"\n\t\t\t\t\t Year(in 4 digits) : ";
            cin >> D.y;
            if((D.y <= 1930)||(D.y>2020) )
            {
                cout << "\n\t\tINCORRECT INPUT, TRY AGAIN!!\n";
                c = 0;
            }
            else
                c = 1;
        }
        POLICE.d=D.d;
        POLICE. m=D.m;
        POLICE. y=D.y;

        loc = (check-1)*sizeof(driver);
        file.seekp(loc);
        file.write((char*)this,sizeof(driver));
        file.close();
        cout <<"\n";
        fflush(stdin);
        cout << "\n\n\t\t\t < RECORD MODIFIED >";
    }
    else
    {
        cout << "\n\n\n\t\tPRESS 'Y' TO TRY AGAIN 'N' TO GO TO QUIT : ";
        char ch_m;
        cin >> ch_m;
        fflush(stdin);
        if(ch_m == 'y' || ch_m == 'Y')
        {
            system("cls");
            goto modify_start;
        }
        else
        {
            callExit();
        }
    }
}

void driver::list()
{
    system("cls");
    fflush(stdin);
    int j ;
    fstream file;
    file.open("info.txt",ios::in|ios::ate|ios::binary);
    int q = file.tellg();
    int c = q/sizeof(driver);
    file.seekg(0);
    cout<<"                            \n";
    cout<<"		                                 \n";
    cout<<"                                DRIVER'S  LIST    \n";
    cout<<"			                         \n";
    cout<<"                            \n";
    cout<<"\n================================================================================\n";
    cout<<"SR.\tNAME\t\t\tLICENCE NO.\t\t\tMOBILE NO\n";
    cout<<"================================================================================\n";
    int i = 0;
    while(file.read((char*)this,sizeof(driver)))
    {
        i++;
        cout << i << "       ";
        for(j=0; j<strlen(this->name); j++)
            cout << this->name[j];
        cout<<"\t\t\t    ";
        for(j=0; j<strlen(this->licence); j++)
            cout << this->licence[j];
        cout << "\t\t\t        ";
        for(j=0; j<strlen(this->mobile); j++)
            cout << this->mobile[j];
        cout <<"\n";
        fflush(stdin);
        getchar();
        cout << "\n--------------------------------------------------------------------------------\n";
        if((i%3)==0&&(i!=c))
        {
            system("pause");
            system("cls");
            cout << "\n================================================================================\n";
            cout << "SR.\tNAME\t\t\tLICENCE NO.\t\t\tMOBILE NO\n";
            cout << "================================================================================\n";
        }
    }
    file.close();
    getchar();
}

void driver::empty()
{
    int i;
    for(i=0; i<20; i++)
        car.car_lic[i]=' ';
    for(i=0; i<20; i++)
        car.country[i]=' ';
    for(i=0; i<20; i++)
        car.model[i]=' ';
    for(i=0; i<20; i++)
        des.place[i]=' ';
    for(i=0; i<20; i++)
        des.incident[i]=' ';
    for(i=0; i<50; i++)
        POLICE.station[i]=' ';
    for(i=0; i<10; i++)
        POLICE.fir_no[i]=' ';
    POLICE.m = 0;
    POLICE.d = 0;
    POLICE.y = 0;
}

int driver::licencecheck(char b[])
{
    fstream  file;
    char a[10];
    int check=0;
    file.open("info.dat",ios::in|ios::ate);
    int q=file.tellg();
    int size=q/sizeof(driver);
    file.seekg(0,ios::beg);
    for(int i=0; i<size; i++)
    {
        file.read((char*)this,sizeof(driver));
        strcpy(a,licence);
        if(strcmp(b,a)==0)
        {
            check+=1;
            break;
        }
    }
    if(check==0)
    {
        return 1;
    }
    else
    {
        cout<<"\tGIVEN LICENCE NO ALREADY EXISTS!"<<endl;
        return 1;
    }
    file.close();
}

int main()
{
    system("cls");
    mainpage();
    driver l;
    int x,res=1;
    res = login();

    if(res == 1)
    {
        menu(l);
    }
    return 0;
}



