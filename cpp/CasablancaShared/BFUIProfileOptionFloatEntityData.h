// Object: BFUIProfileOptionFloatEntityData
// ClassId: 2357
// RuntimeId: 30109
// TypeInfo: 0x0000000144D88120
#include "../CasablancaShared/BFUIProfileOptionEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIProfileOptionFloatEntityData : public CasablancaShared::BFUIProfileOptionEntityData {
        Float32 InValue; // 0x30
        Boolean SetOnPropertyChange; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(BFUIProfileOptionFloatEntityData) == 0x38);
}
#pragma pack(pop)