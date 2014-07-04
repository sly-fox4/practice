//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Service.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{   Form1->ComboBox2->Clear();
  _di_OnlineTimeTableSoap myTes = GetOnlineTimeTableSoap();
  AirportsResponse s;
  if( Form1->ComboBox1->ItemIndex==0)
  {
   s = myTes ->GetAirportsList("ru");
  int i=0;
  while (i<63)
	{
		Form1->ComboBox2->Items->Add(s[i]->Name);
		i++;
	}
  }
	if( Form1->ComboBox1->ItemIndex==1)
	{
		s = myTes ->GetAirportsList("en");
	int i=0;
	 while (i<63)
		{
		Form1->ComboBox2->Items->Add(s[i]->Name);
		i++;
		}
	}
int abc=5;

}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button2Click(TObject *Sender)
{ _di_OnlineTimeTableSoap myTes = GetOnlineTimeTableSoap();
		AirportsResponse f;
if( Form1->ComboBox1->ItemIndex==0)
  {
   f = myTes ->GetAirportsList("ru");
  }
	if( Form1->ComboBox1->ItemIndex==1)
	{
		f = myTes ->GetAirportsList("en");
	}
		TDateTime nowTime=Form1->DateTimePicker1->DateTime;
		TXSDateTime* time;
		time= new TXSDateTime;
		time->AsDateTime=nowTime;
		int i=0;
		while(i<63)
		{
			if(Form1->ComboBox2->Text==f[i]->Name)
				{   Form1->Memo1->Lines->Add(f[i]->Name);
					TimeTableResponce* a = myTes->GetTimeTable(f[i]->IATA,0,time);
					for(int j=0;j<10;j++)
					{
					Form1->Memo1->Lines->Add(a->Flights[j]->FlightNumber);

					}
				}
		 i++;
		}
}
//---------------------------------------------------------------------------

