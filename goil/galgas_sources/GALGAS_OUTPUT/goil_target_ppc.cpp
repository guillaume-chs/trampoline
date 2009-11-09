//---------------------------------------------------------------------------*
//                                                                           *
//                        File 'goil_target_ppc.cpp'                         *
//                 Generated by version GALGAS_BETA_VERSION                  *
//                     november 9th, 2009, at 20h11'42"                      *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//---------------------------------------------------------------------------*

#include "version_libpm.h"
#if LIBPM_VERSION != THE_LIBPM_VERSION
  #error "This file has been compiled with a version of GALGAS different than the version of libpm"
#endif

//---------------------------------------------------------------------------*

#include <typeinfo>
#include "utilities/MF_MemoryControl.h"
#include "files/C_TextFileWrite.h"
#include "galgas/C_galgas_CLI_Options.h"
#include "goil_target_ppc.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "goil_target_ppc.ggs", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//             Implementation of routine "generate_target_ppc"               *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_generate_target_ppc (C_Compiler & inLexique,
                                const GGS_lstring   var_cas_name,
                                const GGS_ident_map   var_cas_others,
                                const GGS_oil_obj   /* var_cas_exe */,
                                GGS_string & var_cas_result COMMA_UNUSED_LOCATION_ARGS) {
  #ifdef DEBUG_TRACE_ENABLED
    printf ("ENTER routine_generate_target_ppc at %s:%d\n", __FILE__, __LINE__) ;
  #endif
  ::routine_doReplace (inLexique,  var_cas_result,  GGS_string ("$STACK_ZONE$"),  (var_cas_name.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (57))).operator_concat (GGS_string ("_stack")) COMMA_SOURCE_FILE_AT_LINE (57)) ;
  ::routine_doReplace (inLexique,  var_cas_result,  GGS_string ("$EXEC_INTEGER_CONTEXT$"),  (var_cas_name.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (59))).operator_concat (GGS_string ("_int_context")) COMMA_SOURCE_FILE_AT_LINE (59)) ;
  ::routine_doReplace (inLexique,  var_cas_result,  GGS_string ("$EXEC_FLOAT_CONTEXT$"),  (var_cas_name.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (61))).operator_concat (GGS_string ("_fp_context")) COMMA_SOURCE_FILE_AT_LINE (61)) ;
  ::routine_doReplace (inLexique,  var_cas_result,  GGS_string ("$EXEC_USE_FLOAT$"),  (var_cas_name.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (63))).operator_concat (GGS_string ("_uses_fp")) COMMA_SOURCE_FILE_AT_LINE (63)) ;
  GGS_uint  var_cas_stack_size ;
  ::routine_additional_int_key_required (inLexique,  GGS_string ("STACKSIZE"),  var_cas_others,  var_cas_name,  var_cas_stack_size COMMA_SOURCE_FILE_AT_LINE (66)) ;
  var_cas_result = var_cas_result.reader_stringByReplacingStringByString (inLexique, GGS_string ("$STACK_SIZE$"), var_cas_stack_size.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (67)) COMMA_SOURCE_FILE_AT_LINE (67)) ;
  GGS_bool var_cas_use_float ;
  ::routine_additional_bool_key_required (inLexique,  GGS_string ("USEFLOAT"),  var_cas_others,  var_cas_name,  var_cas_use_float COMMA_SOURCE_FILE_AT_LINE (70)) ;
  GGS_uint  var_cas_use_float_as_int ;
  const GGS_bool cond_2588 = (var_cas_use_float).operator_isEqual (GGS_bool (true)) ;
  if (cond_2588.isBuiltAndTrue ()) {
    var_cas_use_float_as_int = GGS_uint (1U) ;
  }else if (cond_2588.isBuiltAndFalse ()) {
    var_cas_use_float_as_int = GGS_uint (0U) ;
  }
  var_cas_result = var_cas_result.reader_stringByReplacingStringByString (inLexique, GGS_string ("$FLAG_USE_FLOAT$"), var_cas_use_float_as_int.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (77)) COMMA_SOURCE_FILE_AT_LINE (77)) ;
  #ifdef DEBUG_TRACE_ENABLED
    printf ("LEAVE routine_generate_target_ppc\n") ;
  #endif
}

//---------------------------------------------------------------------------*
//                                                                           *
//               Implementation of routine "generate_isr_ppc"                *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_generate_isr_ppc (C_Compiler &,
                                const GGS_isr_map   /* var_cas_isrs */,
                                GGS_string & /* var_cas_code */ COMMA_UNUSED_LOCATION_ARGS) {
  #ifdef DEBUG_TRACE_ENABLED
    printf ("ENTER routine_generate_isr_ppc at %s:%d\n", __FILE__, __LINE__) ;
  #endif
  #ifdef DEBUG_TRACE_ENABLED
    printf ("LEAVE routine_generate_isr_ppc\n") ;
  #endif
}

//---------------------------------------------------------------------------*
//                                                                           *
//             Implementation of routine "generate_counter_ppc"              *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_generate_counter_ppc (C_Compiler & inLexique,
                                const GGS_counter_map   var_cas_counters,
                                GGS_string & var_cas_code COMMA_UNUSED_LOCATION_ARGS) {
  #ifdef DEBUG_TRACE_ENABLED
    printf ("ENTER routine_generate_counter_ppc at %s:%d\n", __FILE__, __LINE__) ;
  #endif
  GGS_string var_cas_result = GGS_string ("") ;
  {
    GGS_counter_map::cEnumerator enumerator_2973 (var_cas_counters, true) ;
    const GGS_counter_map::cElement * operand_2973 = NULL ;
    while (((operand_2973 = enumerator_2973.nextObject ()))) {
      macroValidPointer (operand_2973) ;
      { const GGS_counter_type _var_3272 = operand_2973->mInfo.counter.reader_type (inLexique COMMA_SOURCE_FILE_AT_LINE (93)) ; // CAST instruction
        if (_var_3272.getPtr () != NULL) {
          macroValidPointer (_var_3272.getPtr ()) ;
          if (typeid (cPtr_software_counter) == typeid (* (_var_3272.getPtr ()))) {
          }else{
            GGS_string var_cas_tmp ;
            ::routine_retrieveTemplateString (inLexique,  var_cas_tmp,  GGS_string ("counter_list_specific") COMMA_SOURCE_FILE_AT_LINE (97)) ;
            ::routine_doReplace (inLexique,  var_cas_tmp,  GGS_string ("$COUNTER$"),  (operand_2973->mKey.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (98))).operator_concat (GGS_string ("_counter_desc")) COMMA_SOURCE_FILE_AT_LINE (98)) ;
            var_cas_result.dotAssign_operation (var_cas_tmp) ;
          }
        }
      }
    }
  }
  ::routine_doReplace (inLexique,  var_cas_code,  GGS_string ("$COUNTER_LIST$"),  var_cas_result COMMA_SOURCE_FILE_AT_LINE (103)) ;
  #ifdef DEBUG_TRACE_ENABLED
    printf ("LEAVE routine_generate_counter_ppc\n") ;
  #endif
}

//---------------------------------------------------------------------------*

