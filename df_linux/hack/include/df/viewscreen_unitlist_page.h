/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_UNITLIST_PAGE_H
#define DF_VIEWSCREEN_UNITLIST_PAGE_H
namespace df {
  namespace enums {
    namespace viewscreen_unitlist_page {
      enum viewscreen_unitlist_page : int32_t {
        Citizens,
        Livestock,
        Others,
        Dead
      };
    }
  }
  using enums::viewscreen_unitlist_page::viewscreen_unitlist_page;
  template<> struct DFHACK_EXPORT identity_traits<viewscreen_unitlist_page> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<viewscreen_unitlist_page> {
    typedef int32_t base_type;
    typedef viewscreen_unitlist_page enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 3;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[4];
  };
}
#endif
