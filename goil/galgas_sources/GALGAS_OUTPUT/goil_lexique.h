//---------------------------------------------------------------------------*
//                                                                           *
//                          File 'goil_lexique.h'                            *
//                Generated by version 1.3.1 (LL(1) grammar)                 *
//                     october 10th, 2006, at 11h3'17"                       *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef goil_lexique_0_DEFINED
#define goil_lexique_0_DEFINED
#include "galgas/C_Lexique.h"

//---------------------------------------------------------------------------*
//                                                                           *
//                          Lexical scanner class                            *
//                                                                           *
//---------------------------------------------------------------------------*

class goil_lexique : public C_Lexique {
//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//--- Terminal symbols enumeration
  public : enum {goil_lexique_1_,
  goil_lexique_1_OIL_5FVERSION,
  goil_lexique_1_IMPLEMENTATION,
  goil_lexique_1_OS,
  goil_lexique_1_TASK,
  goil_lexique_1_COUNTER,
  goil_lexique_1_ALARM,
  goil_lexique_1_RESOURCE,
  goil_lexique_1_EVENT,
  goil_lexique_1_ISR,
  goil_lexique_1_MESSAGE,
  goil_lexique_1_COM,
  goil_lexique_1_NM,
  goil_lexique_1_APPMODE,
  goil_lexique_1_IPDU,
  goil_lexique_1_CPU,
  goil_lexique_1_UINT32,
  goil_lexique_1_INT32,
  goil_lexique_1_UINT64,
  goil_lexique_1_INT64,
  goil_lexique_1_FLOAT,
  goil_lexique_1_ENUM,
  goil_lexique_1_STRING,
  goil_lexique_1_BOOLEAN,
  goil_lexique_1_WITH_5FAUTO,
  goil_lexique_1_NO_5FDEFAULT,
  goil_lexique_1_AUTO,
  goil_lexique_1_TRUE,
  goil_lexique_1_FALSE,
  goil_lexique_1_OS_5FTYPE,
  goil_lexique_1_TASK_5FTYPE,
  goil_lexique_1_COUNTER_5FTYPE,
  goil_lexique_1_ALARM_5FTYPE,
  goil_lexique_1_RESOURCE_5FTYPE,
  goil_lexique_1_EVENT_5FTYPE,
  goil_lexique_1_ISR_5FTYPE,
  goil_lexique_1_MESSAGE_5FTYPE,
  goil_lexique_1_COM_5FTYPE,
  goil_lexique_1_NM_5FTYPE,
  goil_lexique_1_APPMODE_5FTYPE,
  goil_lexique_1_IPDU_5FTYPE,
  goil_lexique_1_idf,
  goil_lexique_1__3B,
  goil_lexique_1__3A,
  goil_lexique_1__3D,
  goil_lexique_1__7B,
  goil_lexique_1__7D,
  goil_lexique_1__2E_2E,
  goil_lexique_1__5B,
  goil_lexique_1__5D,
  goil_lexique_1__2C,
  goil_lexique_1__2E,
  goil_lexique_1_string,
  goil_lexique_1_uint_5Fnumber,
  goil_lexique_1_float_5Fnumber} ;

//--- Key words table 'OILDelimiters'
  public : static const sint16 goil_lexique_table_size_OILDelimiters ;
  private : static const C_lexique_table_entry goil_lexique_table_for_OILDelimiters [10] ;
  public : static sint16 search_into_OILDelimiters (const C_String & inSearchedString) ;

//--- Key words table 'dataTypes'
  public : static const sint16 goil_lexique_table_size_dataTypes ;
  private : static const C_lexique_table_entry goil_lexique_table_for_dataTypes [8] ;
  public : static sint16 search_into_dataTypes (const C_String & inSearchedString) ;

//--- Key words table 'miscSpecifiers'
  public : static const sint16 goil_lexique_table_size_miscSpecifiers ;
  private : static const C_lexique_table_entry goil_lexique_table_for_miscSpecifiers [5] ;
  public : static sint16 search_into_miscSpecifiers (const C_String & inSearchedString) ;

//--- Key words table 'objList'
  public : static const sint16 goil_lexique_table_size_objList ;
  private : static const C_lexique_table_entry goil_lexique_table_for_objList [13] ;
  public : static sint16 search_into_objList (const C_String & inSearchedString) ;

//--- Key words table 'objectRefType'
  public : static const sint16 goil_lexique_table_size_objectRefType ;
  private : static const C_lexique_table_entry goil_lexique_table_for_objectRefType [12] ;
  public : static sint16 search_into_objectRefType (const C_String & inSearchedString) ;

//--- Key words table 'oilDefinitions'
  public : static const sint16 goil_lexique_table_size_oilDefinitions ;
  private : static const C_lexique_table_entry goil_lexique_table_for_oilDefinitions [1] ;
  public : static sint16 search_into_oilDefinitions (const C_String & inSearchedString) ;

//--- Key words table 'oilVersion'
  public : static const sint16 goil_lexique_table_size_oilVersion ;
  private : static const C_lexique_table_entry goil_lexique_table_for_oilVersion [1] ;
  public : static sint16 search_into_oilVersion (const C_String & inSearchedString) ;

  protected : virtual void parseLexicalToken (const bool inPropagateLexicalErrorException) ;
  protected : virtual void appendTerminalMessageToSyntaxErrorMessage (const sint16 numeroTerminal,
                                                              C_String & messageErreur) ;

//--- Constructor
  public : goil_lexique (AC_galgas_io * inGalgasInputOutput COMMA_LOCATION_ARGS) ;
  public : C_String a_string ; // user defined attribute
  public : C_String att_token ; // user defined attribute
  public : double floatNumber ; // user defined attribute
  public : uint32 integerNumber ; // user defined attribute
  public : C_String number ; // user defined attribute
  public : virtual sint16 terminalVocabularyCount (void) const { return 54 ; }

//--- Get Token String
  public : virtual C_String getCurrentTokenString (void) const ;
//--- Style Definition
  public : static sint32 getStylesCount (void) ;
  public : static const char * getStyleName (const sint32 inIndex) ;
//--- Virtual method called getting terminal style index
  public : virtual uint8 terminalStyleIndex (const sint32 inTerminal) ;
} ;

//---------------------------------------------------------------------------*

#endif