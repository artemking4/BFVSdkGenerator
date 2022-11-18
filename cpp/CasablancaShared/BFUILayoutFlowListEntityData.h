// Object: BFUILayoutFlowListEntityData
// ClassId: 2290
// RuntimeId: 36027
// TypeInfo: 0x0000000144D97B90
#include "../CasablancaShared/BFUILayoutEntityData.h"
#include "../Core/Vec2.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUILayoutFlowListEntityData : public CasablancaShared::BFUILayoutEntityData {
        Core::Vec2 LayoutMargin; // 0x28
        Core::Vec2 ElementMargin; // 0x30
        Core::Vec2 MaxSize; // 0x38
        Boolean DrawZeroSizeElement; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(BFUILayoutFlowListEntityData) == 0x48);
}
#pragma pack(pop)