// Object: BFUIElementSolidFillEntityData
// ClassId: 3667
// RuntimeId: 12098
// TypeInfo: 0x0000000144D9D090
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../GameShared/UIBlendMode.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementSolidFillEntityData : public CasablancaShared::BFUIElementEntityData {
        GameShared::UIBlendMode BlendMode; // 0x130
        char pad_0x134[0xC];
    }; // 0x140
    static_assert(sizeof(BFUIElementSolidFillEntityData) == 0x140);
}
#pragma pack(pop)