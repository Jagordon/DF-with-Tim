/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_HF_ACT_ON_BUILDINGST_H
#define DF_HISTORY_EVENT_HF_ACT_ON_BUILDINGST_H
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_hf_act_on_buildingst : history_event {
    int32_t action;
    int32_t histfig;
    int32_t site;
    int32_t structure;
    static virtual_identity _identity;
  protected:
    history_event_hf_act_on_buildingst(virtual_identity *_id = &history_event_hf_act_on_buildingst::_identity);
    friend void *df::allocator_fn<history_event_hf_act_on_buildingst>(void*,const void*);
  };
}
#endif
