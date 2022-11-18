// Object: BFUILayoutLeftToRightEntityData
// ClassId: 2294
// RuntimeId: 27198
// TypeInfo: 0x0000000144D97C90
#include "../CasablancaShared/BFUILayoutEntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUILayoutLeftToRightEntityData : public CasablancaShared::BFUILayoutEntityData {
        Float32 Spacing; // 0x28
        Float32 OffsetScaling; // 0x2C
    }; // 0x30
    static_assert(sizeof(BFUILayoutLeftToRightEntityData) == 0x30);
}
#pragma pack(pop)