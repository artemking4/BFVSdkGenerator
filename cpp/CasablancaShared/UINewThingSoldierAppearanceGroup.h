// Object: UINewThingSoldierAppearanceGroup
// ClassId: 5299
// RuntimeId: 49150
// TypeInfo: 0x0000000144D5EAE0
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"
#include "../CasablancaShared/UISoldierAppearanceSlot.h"
#include "../CasablancaShared/BFUIAppearanceInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingSoldierAppearanceGroup : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUISoldierInstanceObject Soldier; // 0x28
        CasablancaShared::UISoldierAppearanceSlot Slot; // 0x30
        char pad_0x34[0x4];
        CasablancaShared::BFUIAppearanceInstanceObject Appearance; // 0x38
    }; // 0x40
    static_assert(sizeof(UINewThingSoldierAppearanceGroup) == 0x40);
}
#pragma pack(pop)