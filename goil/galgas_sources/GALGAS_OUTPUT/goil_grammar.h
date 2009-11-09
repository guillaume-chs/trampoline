//---------------------------------------------------------------------------*
//                                                                           *
//                          File 'goil_grammar.h'                            *
//                 Generated by version GALGAS_BETA_VERSION                  *
//                     november 9th, 2009, at 20h11'44"                      *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef GRAMMAR_goil_grammar_HAS_BEEN_DEFINED
#define GRAMMAR_goil_grammar_HAS_BEEN_DEFINED

//---------------------------------------------------------------------------*

#include "goil_syntax.h"
#include "goil_imp_def.h"
#include "goil_obj_os.h"
#include "goil_obj_task.h"
#include "goil_obj_counter.h"
#include "goil_obj_appmode.h"
#include "goil_obj_alarm.h"
#include "goil_obj_resource.h"
#include "goil_obj_event.h"
#include "goil_obj_isr.h"
#include "goil_obj_message.h"
#include "goil_obj_networkmessage.h"
#include "goil_obj_com.h"
#include "goil_obj_ipdu.h"
#include "goil_obj_scheduletable.h"
#include "goil_obj_application.h"
#include "goil_timing_prot_attrs.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*

class goil_grammar : public goil_syntax,
                                 public goil_imp_def,
                                 public goil_obj_os,
                                 public goil_obj_task,
                                 public goil_obj_counter,
                                 public goil_obj_appmode,
                                 public goil_obj_alarm,
                                 public goil_obj_resource,
                                 public goil_obj_event,
                                 public goil_obj_isr,
                                 public goil_obj_message,
                                 public goil_obj_networkmessage,
                                 public goil_obj_com,
                                 public goil_obj_ipdu,
                                 public goil_obj_scheduletable,
                                 public goil_obj_application,
                                 public goil_timing_prot_attrs {
  public : virtual void nt_start_ (goil_lexique &) ;
  public : static void _performSourceFileParsing_ (C_Compiler & inCompiler,
                                const C_String & inDependancyExtension,
                                const C_String & inDependancyPath,
                                GGS_string * inSentStringPtr,
                                const GGS_lstring inFileName
                                COMMA_LOCATION_ARGS) ;
  public : static void _performSourceStringParsing_ (C_Compiler & inCompiler,
                                GGS_string * inSentStringPtr,
                                const GGS_string inSourceString
                                COMMA_LOCATION_ARGS) ;
  public : virtual void nt_file_ (goil_lexique &,
                                GGS_implementation &,
                                GGS_root_obj &) ;
  public : virtual void nt_OIL_version_ (goil_lexique &,
                                GGS_lstring &,
                                GGS_lstring &) ;
  public : virtual void nt_description_ (goil_lexique &,
                                GGS_lstring &) ;
  public : virtual void nt_application_definition_ (goil_lexique &,
                                GGS_root_obj &) ;
  public : virtual void nt_object_definition_list_ (goil_lexique &,
                                GGS_os_obj &,
                                GGS_com &,
                                GGS_task_map &,
                                GGS_counter_map &,
                                GGS_alarm_map &,
                                GGS_resource_map &,
                                GGS_event_map &,
                                GGS_isr_map &,
                                GGS_message_map &,
                                GGS_netmess_map &,
                                GGS_scheduletable_map &,
                                GGS_app_map &) ;
  public : virtual void nt_nm_ (goil_lexique &) ;
  public : virtual void nt_boolean_ (goil_lexique &,
                                GGS_lbool &) ;
  public : virtual void nt_free_field_ (goil_lexique &,
                                GGS_ident_map &) ;
  public : virtual void nt_include_file_level_ (goil_lexique &,
                                GGS_implementation &,
                                GGS_root_obj &) ;
  public : virtual void nt_include_cpu_level_ (goil_lexique &,
                                GGS_os_obj &,
                                GGS_com &,
                                GGS_task_map &,
                                GGS_counter_map &,
                                GGS_alarm_map &,
                                GGS_resource_map &,
                                GGS_event_map &,
                                GGS_isr_map &,
                                GGS_message_map &,
                                GGS_netmess_map &,
                                GGS_scheduletable_map &,
                                GGS_app_map &) ;
  public : virtual void nt_implementation_definition_ (goil_lexique &,
                                GGS_implementation &) ;
  public : virtual void nt_os_ (goil_lexique &,
                                GGS_os_obj &) ;
  public : virtual void nt_appmode_ (goil_lexique &) ;
  public : virtual void nt_task_ (goil_lexique &,
                                GGS_task_map &) ;
  public : virtual void nt_counter_ (goil_lexique &,
                                GGS_counter_map &) ;
  public : virtual void nt_alarm_ (goil_lexique &,
                                GGS_alarm_map &) ;
  public : virtual void nt_resource_ (goil_lexique &,
                                GGS_resource_map &) ;
  public : virtual void nt_event_ (goil_lexique &,
                                GGS_event_map &) ;
  public : virtual void nt_isr_ (goil_lexique &,
                                GGS_isr_map &) ;
  public : virtual void nt_mess_ (goil_lexique &,
                                GGS_message_map &) ;
  public : virtual void nt_scheduletable_ (goil_lexique &,
                                GGS_scheduletable_map &) ;
  public : virtual void nt_appli_ (goil_lexique &,
                                GGS_app_map &) ;
  public : virtual void nt_networkmess_ (goil_lexique &,
                                GGS_netmess_map &) ;
  public : virtual void nt_com_ (goil_lexique &,
                                GGS_com &) ;
  public : virtual void nt_ipdu_ (goil_lexique &) ;
  public : virtual void nt_implementation_spec_list_ (goil_lexique &,
                                GGS_implementation &) ;
  public : virtual void nt_implementation_spec_ (goil_lexique &,
                                GGS_implementation &) ;
  public : virtual void nt_implementation_list_ (goil_lexique &,
                                GGS_string,
                                GGS_implementation &) ;
  public : virtual void nt_impl_attr_def_ (goil_lexique &,
                                GGS_lstring &,
                                GGS_imp_type &) ;
  public : virtual void nt_auto_specifier_ (goil_lexique &,
                                GGS_bool &) ;
  public : virtual void nt_uint32_attribute_name_ (goil_lexique &,
                                GGS_lstring &) ;
  public : virtual void nt_attribute_name_ (goil_lexique &,
                                GGS_lstring &) ;
  public : virtual void nt_multiple_specifier_ (goil_lexique &,
                                GGS_bool &) ;
  public : virtual void nt_default_number_ (goil_lexique &,
                                GGS_bool &,
                                GGS_luint64 &) ;
  public : virtual void nt_default_name_ (goil_lexique &,
                                GGS_bool &,
                                GGS_lstring &) ;
  public : virtual void nt_enumeration_ (goil_lexique &,
                                GGS_stringset &) ;
  public : virtual void nt_enumerator_ (goil_lexique &,
                                GGS_stringset &) ;
  public : virtual void nt_impl_parameter_list_ (goil_lexique &) ;
  public : virtual void nt_implementation_def_ (goil_lexique &) ;
  public : virtual void nt_uint32_number_set_ (goil_lexique &,
                                GGS_uint32_set &) ;
  public : virtual void nt_sint32_number_set_ (goil_lexique &,
                                GGS_sint32_set &) ;
  public : virtual void nt_uint64_number_set_ (goil_lexique &,
                                GGS_uint64_set &) ;
  public : virtual void nt_sint64_number_set_ (goil_lexique &,
                                GGS_sint64_set &) ;
  public : virtual void nt_float_number_set_ (goil_lexique &,
                                GGS_float_set &) ;
  public : virtual void nt_default_uint32_number_ (goil_lexique &,
                                GGS_uint32_class &) ;
  public : virtual void nt_default_sint32_number_ (goil_lexique &,
                                GGS_sint32_class &) ;
  public : virtual void nt_default_uint64_number_ (goil_lexique &,
                                GGS_uint64_class &) ;
  public : virtual void nt_default_sint64_number_ (goil_lexique &,
                                GGS_sint64_class &) ;
  public : virtual void nt_default_float_number_ (goil_lexique &,
                                GGS_float_class &) ;
  public : virtual void nt_default_string_ (goil_lexique &,
                                GGS_string_class &) ;
  public : virtual void nt_default_enum_ (goil_lexique &,
                                GGS_basic_type &) ;
  public : virtual void nt_default_bool_ (goil_lexique &,
                                GGS_bool_class &) ;
  public : virtual void nt_signed_number_ (goil_lexique &,
                                GGS_sint64 &) ;
  public : virtual void nt_task_attributes_ (goil_lexique &,
                                GGS_basic_type &,
                                GGS_lstring &,
                                GGS_basic_type &,
                                GGS_task_autostart_obj &,
                                GGS_lstringlist &,
                                GGS_lstringlist &,
                                GGS_lstringlist &,
                                GGS_lstringlist &,
                                GGS_timing_prot &,
                                GGS_ident_map &) ;
  public : virtual void nt_task_autostart_params_ (goil_lexique &,
                                GGS_task_autostart_obj &) ;
  public : virtual void nt_timing_prot_attrs_ (goil_lexique &,
                                GGS_basic_type &,
                                GGS_basic_type &,
                                GGS_basic_type &,
                                GGS_basic_type &,
                                GGS_basic_type &,
                                GGS_basic_type &,
                                GGS_rezlock_map &) ;
  public : virtual void nt_counter_parameters_ (goil_lexique &,
                                GGS_basic_type &,
                                GGS_basic_type &,
                                GGS_basic_type &,
                                GGS_lstring &,
                                GGS_lstringlist &,
                                GGS_counter_type &,
                                GGS_lstring &) ;
  public : virtual void nt_counter_type_attrs_ (goil_lexique &,
                                GGS_counter_type &) ;
  public : virtual void nt_alarm_parameters_ (goil_lexique &,
                                GGS_lstring &,
                                GGS_action_obj &,
                                GGS_autostart_obj &,
                                GGS_lstringlist &) ;
  public : virtual void nt_alarm_action_params_ (goil_lexique &,
                                GGS_action_obj &) ;
  public : virtual void nt_alarm_autostart_params_ (goil_lexique &,
                                GGS_autostart_obj &) ;
  public : virtual void nt_resource_attributes_ (goil_lexique &,
                                GGS_resource_property_obj &,
                                GGS_lstringlist &) ;
  public : virtual void nt_event_attributes_ (goil_lexique &,
                                GGS_event_mask_obj &) ;
  public : virtual void nt_isr_attributes_ (goil_lexique &,
                                GGS_basic_type &,
                                GGS_basic_type &,
                                GGS_lstringlist &,
                                GGS_lstringlist &,
                                GGS_lstringlist &,
                                GGS_timing_prot &,
                                GGS_ident_map &) ;
  public : virtual void nt_message_attributes_ (goil_lexique &,
                                GGS_action_obj &,
                                GGS_action_obj &,
                                GGS_lstringlist &,
                                GGS_ident_map &,
                                GGS_mess_prop_obj &) ;
  public : virtual void nt_message_property_ (goil_lexique &,
                                GGS_mess_prop_obj &) ;
  public : virtual void nt_notification_property_ (goil_lexique &,
                                GGS_action_obj &) ;
  public : virtual void nt_ssi_attributes_ (goil_lexique &,
                                GGS_mess_prop_obj &) ;
  public : virtual void nt_sse_attributes_ (goil_lexique &,
                                GGS_mess_prop_obj &) ;
  public : virtual void nt_sde_attributes_ (goil_lexique &,
                                GGS_mess_prop_obj &) ;
  public : virtual void nt_sze_attributes_ (goil_lexique &,
                                GGS_mess_prop_obj &) ;
  public : virtual void nt_rzi_attributes_ (goil_lexique &,
                                GGS_mess_prop_obj &) ;
  public : virtual void nt_rze_attributes_ (goil_lexique &,
                                GGS_mess_prop_obj &) ;
  public : virtual void nt_rui_attributes_ (goil_lexique &,
                                GGS_mess_prop_obj &) ;
  public : virtual void nt_rqi_attributes_ (goil_lexique &,
                                GGS_mess_prop_obj &) ;
  public : virtual void nt_rue_attributes_ (goil_lexique &,
                                GGS_mess_prop_obj &) ;
  public : virtual void nt_rqe_attributes_ (goil_lexique &,
                                GGS_mess_prop_obj &) ;
  public : virtual void nt_rde_attributes_ (goil_lexique &,
                                GGS_mess_prop_obj &) ;
  public : virtual void nt_rzs_attributes_ (goil_lexique &,
                                GGS_mess_prop_obj &) ;
  public : virtual void nt_cdatatype_ (goil_lexique &,
                                GGS_lstring &) ;
  public : virtual void nt_transferproperty_ (goil_lexique &,
                                GGS_lstring &) ;
  public : virtual void nt_networkmessage_ (goil_lexique &,
                                GGS_lstring &) ;
  public : virtual void nt_filter_ (goil_lexique &,
                                GGS_filter_prop_obj &) ;
  public : virtual void nt_mask_x_attribute_ (goil_lexique &,
                                GGS_luint64 &,
                                GGS_luint64 &) ;
  public : virtual void nt_mask_attribute_ (goil_lexique &,
                                GGS_luint64 &) ;
  public : virtual void nt_min_max_attribute_ (goil_lexique &,
                                GGS_luint64 &,
                                GGS_luint64 &) ;
  public : virtual void nt_period_offset_attribute_ (goil_lexique &,
                                GGS_luint64 &,
                                GGS_luint64 &) ;
  public : virtual void nt_networkordercallout_ (goil_lexique &,
                                GGS_lstring &) ;
  public : virtual void nt_cpuordercallout_ (goil_lexique &,
                                GGS_lstring &) ;
  public : virtual void nt_initialvalue_ (goil_lexique &,
                                GGS_basic_type &) ;
  public : virtual void nt_sendingmessage_ (goil_lexique &,
                                GGS_lstring &) ;
  public : virtual void nt_queuesize_ (goil_lexique &,
                                GGS_luint64 &) ;
  public : virtual void nt_link_ (goil_lexique &,
                                GGS_link_obj &) ;
  public : virtual void nt_ipdu_ref_ (goil_lexique &,
                                GGS_lstring &) ;
  public : virtual void nt_net_messageproperty_ (goil_lexique &,
                                GGS_base_netprop &) ;
  public : virtual void nt_static_mp_ (goil_lexique &,
                                GGS_base_netprop &) ;
  public : virtual void nt_dynamic_mp_ (goil_lexique &,
                                GGS_base_netprop &) ;
  public : virtual void nt_sizeinbits_ (goil_lexique &,
                                GGS_luint64 &) ;
  public : virtual void nt_maxsizeinbits_ (goil_lexique &,
                                GGS_luint64 &) ;
  public : virtual void nt_bitordering_ (goil_lexique &,
                                GGS_lstring &) ;
  public : virtual void nt_bitposition_ (goil_lexique &,
                                GGS_luint64 &) ;
  public : virtual void nt_datainterpretation_ (goil_lexique &,
                                GGS_lstring &) ;
  public : virtual void nt_direction_ (goil_lexique &,
                                GGS_lstring &) ;
  public : virtual void nt_comtimebase_ (goil_lexique &,
                                GGS_basic_type &) ;
  public : virtual void nt_comerrorhook_ (goil_lexique &,
                                GGS_basic_type &) ;
  public : virtual void nt_comusegetserviceid_ (goil_lexique &,
                                GGS_basic_type &) ;
  public : virtual void nt_comuseparameteraccess_ (goil_lexique &,
                                GGS_basic_type &) ;
  public : virtual void nt_comstartcomextension_ (goil_lexique &,
                                GGS_basic_type &) ;
  public : virtual void nt_comappmode_ (goil_lexique &,
                                GGS_lstringlist &) ;
  public : virtual void nt_comstatus_ (goil_lexique &,
                                GGS_lstring &) ;
  public : virtual void nt_use_ (goil_lexique &,
                                GGS_lstringlist &) ;
  public : virtual void nt_ipduproperty_ (goil_lexique &) ;
  public : virtual void nt_transmissionmode_ (goil_lexique &) ;
  public : virtual void nt_timeperiod_ (goil_lexique &) ;
  public : virtual void nt_timeoffset_ (goil_lexique &) ;
  public : virtual void nt_minimumdelaytime_ (goil_lexique &) ;
  public : virtual void nt_timeout_ (goil_lexique &) ;
  public : virtual void nt_firsttimeout_ (goil_lexique &) ;
  public : virtual void nt_ipducallout_ (goil_lexique &) ;
  public : virtual void nt_layerused_ (goil_lexique &) ;
  public : virtual void nt_sent_attributes_ (goil_lexique &) ;
  public : virtual void nt_received_attributes_ (goil_lexique &) ;
  public : virtual void nt_direct_attributes_ (goil_lexique &) ;
  public : virtual void nt_periodic_attributes_ (goil_lexique &) ;
  public : virtual void nt_mixed_attributes_ (goil_lexique &) ;
  public : virtual void nt_scheduletable_parameters_ (goil_lexique &,
                                GGS_scheduletable_obj &,
                                GGS_lstring) ;
  public : virtual void nt_st_autostart_rel_params_ (goil_lexique &,
                                GGS_autostart_obj &) ;
  public : virtual void nt_st_autostart_abs_params_ (goil_lexique &,
                                GGS_autostart_obj &) ;
  public : virtual void nt_st_autostart_sync_params_ (goil_lexique &,
                                GGS_autostart_obj &) ;
  public : virtual void nt_ltgt_sync_params_ (goil_lexique &,
                                GGS_ltgt_sync_obj &) ;
  public : virtual void nt_st_expiry_pt_params_ (goil_lexique &,
                                GGS_lstring,
                                GGS_expiry_point_obj &) ;
  public : virtual void nt_st_action_params_ (goil_lexique &,
                                GGS_action_list &) ;
  public : virtual void nt_app_attributes_ (goil_lexique &,
                                GGS_app_obj &,
                                GGS_lstring) ;
  public : virtual void nt_trusted_fcts_ (goil_lexique &,
                                GGS_app_trusted_obj &) ;
  public : virtual PMSInt16 select_repeat_goil_syntax_0 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_syntax_1 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_syntax_2 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_syntax_3 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_syntax_4 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_syntax_5 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_syntax_6 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_imp_def_0 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_imp_def_1 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_imp_def_2 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_imp_def_3 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_imp_def_4 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_imp_def_5 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_imp_def_6 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_imp_def_7 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_imp_def_8 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_imp_def_9 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_imp_def_10 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_imp_def_11 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_imp_def_12 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_imp_def_13 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_imp_def_14 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_imp_def_15 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_imp_def_16 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_imp_def_17 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_imp_def_18 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_imp_def_19 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_imp_def_20 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_imp_def_21 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_imp_def_22 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_imp_def_23 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_imp_def_24 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_imp_def_25 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_imp_def_26 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_os_0 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_os_1 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_os_2 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_os_3 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_os_4 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_task_0 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_task_1 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_task_2 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_task_3 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_task_4 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_counter_0 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_counter_1 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_counter_2 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_counter_3 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_counter_4 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_counter_5 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_counter_6 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_counter_7 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_appmode_0 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_alarm_0 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_alarm_1 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_alarm_2 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_alarm_3 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_alarm_4 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_alarm_5 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_resource_0 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_resource_1 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_event_0 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_event_1 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_isr_0 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_isr_1 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_message_0 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_message_1 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_message_2 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_message_3 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_message_4 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_message_5 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_message_6 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_message_7 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_message_8 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_message_9 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_message_10 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_message_11 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_message_12 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_message_13 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_message_14 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_message_15 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_message_16 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_message_17 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_message_18 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_message_19 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_message_20 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_message_21 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_networkmessage_0 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_networkmessage_1 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_networkmessage_2 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_networkmessage_3 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_networkmessage_4 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_networkmessage_5 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_networkmessage_6 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_networkmessage_7 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_com_0 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_com_1 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_ipdu_0 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_ipdu_1 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_ipdu_2 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_ipdu_3 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_ipdu_4 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_ipdu_5 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_ipdu_6 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_ipdu_7 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_scheduletable_0 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_scheduletable_1 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_scheduletable_2 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_scheduletable_3 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_scheduletable_4 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_scheduletable_5 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_scheduletable_6 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_scheduletable_7 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_scheduletable_8 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_scheduletable_9 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_scheduletable_10 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_scheduletable_11 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_scheduletable_12 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_scheduletable_13 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_application_0 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_application_1 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_application_2 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_application_3 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_application_4 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_application_5 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_application_6 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_obj_application_7 (goil_lexique &) ;
  public : virtual PMSInt16 select_goil_obj_application_8 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_timing_prot_attrs_0 (goil_lexique &) ;
  public : virtual PMSInt16 select_repeat_goil_timing_prot_attrs_1 (goil_lexique &) ;
} ;

//---------------------------------------------------------------------------*

#endif
