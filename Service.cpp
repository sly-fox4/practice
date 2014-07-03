// ************************************************************************ //
// The types declared in this file were generated from data read from the
// WSDL File described below:
// WSDL     : http://86.57.245.235/TimeTable/Service.asmx?WSDL
//  >Import : http://86.57.245.235/TimeTable/Service.asmx?WSDL>0
// Encoding : utf-8
// Version  : 1.0
// (02.07.2014 10:08:26 - - $Rev: 56641 $)
// ************************************************************************ //

#include <System.hpp>
#pragma hdrstop

#if !defined(ServiceH)
#include "Service.h"
#endif



namespace NS_Service {

_di_OnlineTimeTableSoap GetOnlineTimeTableSoap(bool useWSDL, System::String addr, Soaphttpclient::THTTPRIO* HTTPRIO)
{
  static const char* defWSDL= "http://86.57.245.235/TimeTable/Service.asmx?WSDL";
  static const char* defURL = "http://86.57.245.235/TimeTable/Service.asmx";
  static const char* defSvc = "OnlineTimeTable";
  static const char* defPrt = "OnlineTimeTableSoap";
  if (addr=="")
    addr = useWSDL ? defWSDL : defURL;
  Soaphttpclient::THTTPRIO* rio = HTTPRIO ? HTTPRIO : new Soaphttpclient::THTTPRIO(0);
  if (useWSDL) {
    rio->WSDLLocation = addr;
    rio->Service = defSvc;
    rio->Port = defPrt;
  } else {
    rio->URL = addr;
  }
  _di_OnlineTimeTableSoap service;
  rio->QueryInterface(service);
  if (!service && !HTTPRIO)
    delete rio;
  return service;
}


__fastcall TimeTableResponce::~TimeTableResponce()
{
  for(int i=0; i<FFlights.Length; i++)
    if (FFlights[i])
      delete FFlights[i];
}

__fastcall Flight::~Flight()
{
  delete FScheduleTime;
  delete FExpectedTime;
  delete FActualTime;
}

// ************************************************************************ //
// This routine registers the interfaces and types exposed by the WebService.
// ************************************************************************ //
static void RegTypes()
{
  /* OnlineTimeTableSoap */
  InvRegistry()->RegisterInterface(__delphirtti(OnlineTimeTableSoap), L"http://webservices.belavia.by/", L"utf-8");
  InvRegistry()->RegisterDefaultSOAPAction(__delphirtti(OnlineTimeTableSoap), L"http://webservices.belavia.by/%operationName%");
  InvRegistry()->RegisterInvokeOptions(__delphirtti(OnlineTimeTableSoap), ioDocument);
  /* OnlineTimeTableSoap.GetTimeTable */
  InvRegistry()->RegisterMethodInfo(__delphirtti(OnlineTimeTableSoap), "GetTimeTable", "",
                                    "[ReturnName='GetTimeTableResult']", IS_OPTN);
  /* OnlineTimeTableSoap.GetAirportsList */
  InvRegistry()->RegisterMethodInfo(__delphirtti(OnlineTimeTableSoap), "GetAirportsList", "",
                                    "[ReturnName='GetAirportsListResult']", IS_OPTN);
  InvRegistry()->RegisterParamInfo(__delphirtti(OnlineTimeTableSoap), "GetAirportsList", "GetAirportsListResult", L"",
                                   L"[ArrayItemName='Airport']");
  /* TimeTableType */
  RemClassRegistry()->RegisterXSInfo(GetClsMemberTypeInfo(__typeinfo(TimeTableType_TypeInfoHolder)), L"http://webservices.belavia.by/", L"TimeTableType");
  /* ArrayOfFlight */
  RemClassRegistry()->RegisterXSInfo(__delphirtti(ArrayOfFlight), L"http://webservices.belavia.by/", L"ArrayOfFlight");
  /* TimeTableResponce */
  RemClassRegistry()->RegisterXSClass(__classid(TimeTableResponce), L"http://webservices.belavia.by/", L"TimeTableResponce");
  RemClassRegistry()->RegisterExternalPropName(__typeinfo(TimeTableResponce), L"Flights", L"[ArrayItemName='Flight']");
  /* AirportsResponse */
  RemClassRegistry()->RegisterXSInfo(__delphirtti(AirportsResponse), L"http://webservices.belavia.by/", L"AirportsResponse");
  /* Flight */
  RemClassRegistry()->RegisterXSClass(__classid(Flight), L"http://webservices.belavia.by/", L"Flight");
  /* Airport */
  RemClassRegistry()->RegisterXSClass(__classid(Airport), L"http://webservices.belavia.by/", L"Airport");
}
#pragma startup RegTypes 32

};     // NS_Service

