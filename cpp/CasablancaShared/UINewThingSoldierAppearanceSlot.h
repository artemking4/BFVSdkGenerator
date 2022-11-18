// Object: UINewThingSoldierAppearanceSlot
// ClassId: 5300
// RuntimeId: 7862
// TypeInfo: 0x0000000144D5EB60
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"
#include "../CasablancaShared/UISoldierAppearanceSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingSoldierAppearanceSlot : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUISoldierInstanceObject Soldier; // 0x28
        CasablancaShared::UISoldierAppearanceSlot Slot; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(UINewThingSoldierAppearanceSlot) == 0x38);
}
#pragma pack(pop)