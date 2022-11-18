// Object: BFUIProfileOptionEnumEntityData
// ClassId: 2356
// RuntimeId: 44690
// TypeInfo: 0x0000000144D88020
#include "../CasablancaShared/BFUIProfileOptionEntityData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIProfileOptionEnumEntityData : public CasablancaShared::BFUIProfileOptionEntityData {
        Int32 InIndex; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(BFUIProfileOptionEnumEntityData) == 0x38);
}
#pragma pack(pop)