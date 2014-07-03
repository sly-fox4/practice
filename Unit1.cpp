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
{
  _di_OnlineTimeTableSoap myTes = GetOnlineTimeTableSoap();
  AirportsResponse s = myTes ->GetAirportsList("ru");
  int i=0;
  while (i<63)
	{
		Form1->ComboBox1->Items->Add(s[i]->Name);
		i++;
	}
	TDateTime nowTime=Form1->DateTimePicker1->DateTime;
	TXSDateTime* time;
	time= new TXSDateTime;
	time->AsDateTime=nowTime;

	TimeTableResponce* a = myTes->GetTimeTable("ABD",TimeTableType::Arrival,time);
	Form1->ComboBox2->Items->Add(a->Flights[1]->FlightNumber);
}
//---------------------------------------------------------------------------
