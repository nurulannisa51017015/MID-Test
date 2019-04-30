#include<stdio.h>
#include<iostream.h>
#include<conio.h>


 int main()
 {
 char nama[25],grade;
 int ntgs1,ntgs2,ntgs3,nim,nmid,nfinal,tnt,NA;
 cout<<endl<<endl;
 cout<<"\tnama mahasiswa : ";cin>>nama;
 cout<<"\tnim mahasiswa  :  ";cin>>nim;
 cout<<"\tnilai tugas1 : ";cin>>ntgs1;
cout<<"\tnilai tugas2 : ";cin>>ntgs2;
cout<<"\tnilai tugas3 : ";cin>>ntgs3;
cout<<"\tnilai mid  : ";cin>>nmid;
cout<<"\tnilai final :";cin>>nfinal;
tnt = (ntgs1 + ntgs2 + ntgs3)/3;
NA = (0.2*tnt) + (0.4*nmid) + (0.4*nfinal);
if(NA>=80)
{
grade='A';
}
else if(NA>=70)
{
grade='B';
}
else if (NA>=60)
{
grade='C';
}
else if (NA>=50)
{
grade='D';
}
else
{
grade='E';
}
cout<<endl<<endl;
cout<<"\tNama:"<<nama<<endl;
cout<<"\tNim:"<<nim<<endl;
cout<<"\tNilai akhir:"<<NA<<endl;
cout<<"\tGrade:"<<grade<<endl;
getch();
return 0;
}






