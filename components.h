
class Date
{
public:
    int d,m,y;
};

class car : public Date
{
public:
    char country[20],car_lic[20],model[20];
};

struct descp
{
    char place[20];
    char incident[20];
};

class police : public Date
{
public:
    char station[50];
    char fir_no[10];

};

class driver
{
private:
    char name[20];
    char sex[3];
    char licence[10];
    char age[4];
    char nid[20];
    char mobile[15];
    car car;
    police POLICE;
    descp des;
public:
    driver() : name(""),sex(""),licence(""),age(""),nid(""),mobile(""){}
    int ncheck(char arr[]);
    int s_check(char a[]);
    void input(void);
    void output(void);
    void delete_rec(char con_no[]);
    int dcheck(char n[]);
    void display();
    void remove();
    void modify();
    void list();
    void empty();
    int licencecheck(char b[]);

};
