#include<iostream>
using namespace std;
struct student {
    char *last_name;
    int student;
    char grade;
};
int main()
{
struct student tmp,*p=&tmp;
tmp.grade='A';
tmp.last_name="Shiva";
tmp.student=20190017;
cout<<(char*)*p->last_name+1<<endl;
cout<<*(tmp.last_name+1);
return 0;
}