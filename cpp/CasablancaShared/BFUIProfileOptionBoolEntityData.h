// Object: BFUIProfileOptionBoolEntityData
// ClassId: 2354
// RuntimeId: 11845
// TypeInfo: 0x0000000144D880A0
#include "../CasablancaShared/BFUIProfileOptionEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIProfileOptionBoolEntityData : public CasablancaShared::BFUIProfileOptionEntityData {
        Boolean SetOnPropertyChange; // 0x30
        Boolean InValue; // 0x31
        char pad_0x32[0x6];
    }; // 0x38
    static_assert(sizeof(BFUIProfileOptionBoolEntityData) == 0x38);
}
#pragma pack(pop)