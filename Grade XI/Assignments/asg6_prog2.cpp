#include<iostream.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
void line()
{
	 cout<<"_____________________________________________________________"<<endl;
}
struct date
{
	 int dd;
	 int mm;
	 int yy;
};
void inpdate(date &d)
{
	cout<<"Input day ";cin>>d.dd;
	cout<<"Input month ";cin>>d.mm;
	cout<<"Input year ";cin>>d.yy;
}
void outdate(date d)
{
	 cout<<d.dd<<" / "<<d.mm<<" / "<<d.yy<<endl;
}
struct hospital
{
	 int patid;
	 char name[25];
	 int age;
	 char section[25];
	 date dadm;
};
void inppat(hospital &pat)
{
	cout<<"Input patient number ";cin>>pat.patid;
	cout<<"Input patient name ";gets(pat.name);
	cout<<"Input date of admission ";inpdate(pat.dadm);
	cout<<"Input your age ";cin>>pat.age;
	cout<<"Input section ";gets(pat.section);

}
void inpdata(hospital pat[],int &ub)
{

	 for(int i=0;i<=ub;i++)
		 inppat(pat[i]);

}
void displayall(hospital pat[], int ub)
{
	 clrscr();
	 gotoxy(1,1);cout<<"patid";
	 gotoxy(10,1);cout<<"name";
	 gotoxy(35,1);cout<<"age";
	 gotoxy(40,1);cout<<"section";
		gotoxy(65,1);cout<<"date of adm";

	 gotoxy(1,2);line();

	 for(int i=0;i<=ub;i++)
	 {
		  gotoxy(1,(i+3));cout<<pat[i].patid;
		  gotoxy(10,(i+3));cout<<pat[i].name;
		  gotoxy(35,(i+3));cout<<pat[i].age;
		  gotoxy(40,(i+3));cout<<pat[i].section;
		  gotoxy(65,(i+3));outdate(pat[i].dadm);

	 }
	 cout<<endl;
}
void insert(hospital pat[], int &ub)
{
	 int pos;
    cout<<"Input the position number ";
	 cin>>pos;
	 for(int i=ub;i>=pos;i--)
	 {
		 pat[i+1]=pat[i];
	 }
	 inppat(pat[pos]);
	 ub++;
	 cout<<"Data added";

}
void del(hospital pat[], int &ub)
{
	int pos=-1, i, j;
	date d;
	inpdate(d);
	for(i=0;i<=ub;i++)
	{
		 if(pat[i].dadm.dd==d.dd && pat[i].dadm.mm==d.mm && pat[i].dadm.yy==d.yy)
		 {
			 pos=i;
			 for(j=pos;j<=ub;j++)
			 {
				  pat[j]=pat[j+1];
			 }
		 ub--;
		 i--;
		 }
	}
	if(pos==-1) cout<<"Data not found";
	else cout<<"Data found and deleted";
}
void sort(hospital pat[], int ub)
{
	 int i, j;
	 hospital temp;
	 for(i=0;i<=ub;i++)
	 {
		 for(j=i+1;j<=ub;j++)
		 {
			 if(strcmpi(pat[i].section, pat[j].section)>0)
			 {
				  temp=pat[i];
				  pat[i]=pat[j];
				  pat[j]=temp;
			 }
		 }
	 }
	 cout<<"sorted";
}
int main()
{
	 hospital pat[10];
	 int ub, ch;
	 char c;
	  cout<<"Input number of patients ";cin>>ub ;



	 do
	 {
		  clrscr();
		  int ch;
		  cout<<"Menu"<<endl;
		  cout<<"1. Create array of patients"<<endl;
		  cout<<"2. Display array of patients"<<endl;
		  cout<<"3. Add patient"<<endl;
		  cout<<"4. Delete patient"<<endl;
		  cout<<"5. Sort list"<<endl;
		  cout<<"6. Exit"<<endl;



		  cout<<"Input the number corresponding to your choice : ";
		  cin>>ch;


		  switch(ch)
		  {
				case 1:
					 inpdata(pat,ub);
					 break;
				case 2:
					 displayall(pat,ub);
					 break;
				case 3:
					 insert(pat,ub);
					 break;
				case 4:
					 del(pat,ub);
					 break;
				case 5:
					 sort(pat,ub);
					 break;

				case 6:
					 exit(0);
					 break;
				default:
				cout<<"Invalid"<<endl;
		  }
		  cout<<"Press key to continue"<<endl;
		  c=getch();
	 }while(1);
}










