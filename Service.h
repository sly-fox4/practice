// ************************************************************************ //
// The types declared in this file were generated from data read from the
// WSDL File described below:
// WSDL     : http://86.57.245.235/TimeTable/Service.asmx?WSDL
//  >Import : http://86.57.245.235/TimeTable/Service.asmx?WSDL>0
// Encoding : utf-8
// Version  : 1.0
// (02.07.2014 10:08:26 - - $Rev: 56641 $)
// ************************************************************************ //

#ifndef   ServiceH
#define   ServiceH

#include <System.hpp>
#include <InvokeRegistry.hpp>
#include <XSBuiltIns.hpp>
#include <SOAPHTTPClient.hpp>

#if !defined(SOAP_REMOTABLE_CLASS)
#define SOAP_REMOTABLE_CLASS __declspec(delphiclass)
#endif
#if !defined(IS_OPTN)
#define IS_OPTN 0x0001
#endif
#if !defined(IS_UNBD)
#define IS_UNBD 0x0002
#endif
#if !defined(IS_NLBL)
#define IS_NLBL 0x0004
#endif
#if !defined(IS_ATTR)
#define IS_ATTR 0x0010
#endif
#if !defined(IS_REF)
#define IS_REF 0x0080
#endif


namespace NS_Service {

// ************************************************************************ //
// The following types, referred to in the WSDL document are not being represented
// in this file. They are either aliases[@] of other types represented or were referred
// to but never[!] declared in the document. The types from the latter category
// typically map to predefined/known XML or Embarcadero types; however, they could also 
// indicate incorrect WSDL documents that failed to declare or import a schema type.
// ************************************************************************ //
// !:dateTime        - "http://www.w3.org/2001/XMLSchema"[Gbl]
// !:string          - "http://www.w3.org/2001/XMLSchema"[Gbl]

class SOAP_REMOTABLE_CLASS TimeTableResponce;
class SOAP_REMOTABLE_CLASS Flight;
class SOAP_REMOTABLE_CLASS Airport;

enum class TimeTableType   /* "http://webservices.belavia.by/"[GblSmpl] */
{
  Arrival, 
  Departure
};

class TimeTableType_TypeInfoHolder : public TObject {
  TimeTableType __instanceType;
public:
__published:
  __property TimeTableType __propType = { read=__instanceType };
};

typedef DynamicArray<Flight*>     ArrayOfFlight;  /* "http://webservices.belavia.by/"[GblCplx] */


// ************************************************************************ //
// XML       : TimeTableResponce, global, <complexType>
// Namespace : http://webservices.belavia.by/
// ************************************************************************ //
class TimeTableResponce : public TRemotable {
private:
  ArrayOfFlight   FFlights;
  bool            FFlights_Specified;
  void __fastcall SetFlights(int Index, ArrayOfFlight _prop_val)
  {  FFlights = _prop_val; FFlights_Specified = true;  }
  bool __fastcall Flights_Specified(int Index)
  {  return FFlights_Specified;  } 

public:
  __fastcall ~TimeTableResponce();
__published:
  __property ArrayOfFlight    Flights = { index=(IS_OPTN), read=FFlights, write=SetFlights, stored = Flights_Specified };
};


typedef DynamicArray<Airport*>    AirportsResponse; /* "http://webservices.belavia.by/"[GblCplx] */


// ************************************************************************ //
// XML       : Flight, global, <complexType>
// Namespace : http://webservices.belavia.by/
// ************************************************************************ //
class Flight : public TRemotable {
private:
  UnicodeString   FFlightNumber;
  bool            FFlightNumber_Specified;
  UnicodeString   FAirport;
  bool            FAirport_Specified;
  TXSDateTime*    FScheduleTime;
  TXSDateTime*    FExpectedTime;
  TXSDateTime*    FActualTime;
  UnicodeString   FStatus;
  bool            FStatus_Specified;
  UnicodeString   FAircraft;
  bool            FAircraft_Specified;
  void __fastcall SetFlightNumber(int Index, UnicodeString _prop_val)
  {  FFlightNumber = _prop_val; FFlightNumber_Specified = true;  }
  bool __fastcall FlightNumber_Specified(int Index)
  {  return FFlightNumber_Specified;  } 
  void __fastcall SetAirport(int Index, UnicodeString _prop_val)
  {  FAirport = _prop_val; FAirport_Specified = true;  }
  bool __fastcall Airport_Specified(int Index)
  {  return FAirport_Specified;  } 
  void __fastcall SetStatus(int Index, UnicodeString _prop_val)
  {  FStatus = _prop_val; FStatus_Specified = true;  }
  bool __fastcall Status_Specified(int Index)
  {  return FStatus_Specified;  } 
  void __fastcall SetAircraft(int Index, UnicodeString _prop_val)
  {  FAircraft = _prop_val; FAircraft_Specified = true;  }
  bool __fastcall Aircraft_Specified(int Index)
  {  return FAircraft_Specified;  } 

public:
  __fastcall ~Flight();
__published:
  __property UnicodeString FlightNumber = { index=(IS_ATTR | IS_OPTN), read=FFlightNumber, write=SetFlightNumber, stored = FlightNumber_Specified };
  __property UnicodeString    Airport = { index=(IS_ATTR | IS_OPTN), read=FAirport, write=SetAirport, stored = Airport_Specified };
  __property TXSDateTime* ScheduleTime = { index=(IS_ATTR), read=FScheduleTime, write=FScheduleTime };
  __property TXSDateTime* ExpectedTime = { index=(IS_ATTR), read=FExpectedTime, write=FExpectedTime };
  __property TXSDateTime* ActualTime = { index=(IS_ATTR), read=FActualTime, write=FActualTime };
  __property UnicodeString     Status = { index=(IS_ATTR | IS_OPTN), read=FStatus, write=SetStatus, stored = Status_Specified };
  __property UnicodeString   Aircraft = { index=(IS_ATTR | IS_OPTN), read=FAircraft, write=SetAircraft, stored = Aircraft_Specified };
};




// ************************************************************************ //
// XML       : Airport, global, <complexType>
// Namespace : http://webservices.belavia.by/
// ************************************************************************ //
class Airport : public TRemotable {
private:
  UnicodeString   FIATA;
  bool            FIATA_Specified;
  UnicodeString   FName;
  bool            FName_Specified;
  void __fastcall SetIATA(int Index, UnicodeString _prop_val)
  {  FIATA = _prop_val; FIATA_Specified = true;  }
  bool __fastcall IATA_Specified(int Index)
  {  return FIATA_Specified;  } 
  void __fastcall SetName(int Index, UnicodeString _prop_val)
  {  FName = _prop_val; FName_Specified = true;  }
  bool __fastcall Name_Specified(int Index)
  {  return FName_Specified;  } 
__published:
  __property UnicodeString       IATA = { index=(IS_ATTR | IS_OPTN), read=FIATA, write=SetIATA, stored = IATA_Specified };
  __property UnicodeString       Name = { index=(IS_ATTR | IS_OPTN), read=FName, write=SetName, stored = Name_Specified };
};



// ************************************************************************ //
// Namespace : http://webservices.belavia.by/
// soapAction: http://webservices.belavia.by/%operationName%
// transport : http://schemas.xmlsoap.org/soap/http
// style     : document
// use       : literal
// binding   : OnlineTimeTableSoap
// service   : OnlineTimeTable
// port      : OnlineTimeTableSoap
// URL       : http://86.57.245.235/TimeTable/Service.asmx
// ************************************************************************ //
__interface INTERFACE_UUID("{020D54A2-FBE1-92A2-153E-DB524D76412D}") OnlineTimeTableSoap : public IInvokable
{
public:
  virtual TimeTableResponce* GetTimeTable(const UnicodeString Airport, const TimeTableType Type, const TXSDateTime* ViewDate) = 0; 
  virtual AirportsResponse GetAirportsList(const UnicodeString Language) = 0; 
};
typedef DelphiInterface<OnlineTimeTableSoap> _di_OnlineTimeTableSoap;

_di_OnlineTimeTableSoap GetOnlineTimeTableSoap(bool useWSDL=false, System::String addr= System::String(), Soaphttpclient::THTTPRIO* HTTPRIO=0);


};     // NS_Service

#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using  namespace NS_Service;
#endif



#endif // ServiceH
