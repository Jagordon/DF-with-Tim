/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_JOB_TYPE_CLASS_H
#define DF_JOB_TYPE_CLASS_H
namespace df {
  namespace enums {
    namespace job_type_class {
      /**
       * not in DF
       */
      enum job_type_class : int32_t {
        Misc,
        Digging,
        Building,
        Hauling,
        LifeSupport,
        TidyUp,
        Leisure,
        Gathering,
        Manufacture,
        Improvement,
        Crime,
        LawEnforcement,
        StrangeMood,
        UnitHandling,
        SiegeWeapon,
        Medicine
      };
    }
  }
  using enums::job_type_class::job_type_class;
  template<> struct DFHACK_EXPORT identity_traits<job_type_class> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<job_type_class> {
    typedef int32_t base_type;
    typedef job_type_class enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 15;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[16];
  };
}
#endif
