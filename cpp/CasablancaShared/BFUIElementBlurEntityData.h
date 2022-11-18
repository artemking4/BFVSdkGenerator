// Object: BFUIElementBlurEntityData
// ClassId: 3646
// RuntimeId: 34540
// TypeInfo: 0x0000000144D9C910
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../GameShared/UIBlendMode.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementBlurEntityData : public CasablancaShared::BFUIElementEntityData {
        CString MaskTexture; // 0x130
        GameShared::UIBlendMode BlendMode; // 0x138
        Boolean OverrideBlendMode; // 0x13C
        char pad_0x13D[0x3];
    }; // 0x140
    static_assert(sizeof(BFUIElementBlurEntityData) == 0x140);
}
#pragma pack(pop)