// Object: BFUILayoutTopToBottomEntityData
// ClassId: 2297
// RuntimeId: 40971
// TypeInfo: 0x0000000144D97C10
#include "../CasablancaShared/BFUILayoutEntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUILayoutTopToBottomEntityData : public CasablancaShared::BFUILayoutEntityData {
        Float32 Spacing; // 0x28
        Float32 OffsetScaling; // 0x2C
    }; // 0x30
    static_assert(sizeof(BFUILayoutTopToBottomEntityData) == 0x30);
}
#pragma pack(pop)