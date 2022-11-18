// Object: UINewThingSoldierWeapons
// ClassId: 5315
// RuntimeId: 10322
// TypeInfo: 0x0000000144D5E9E0
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIFactionObject.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingSoldierWeapons : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIFactionObject Faction; // 0x28
        CasablancaShared::BFUISoldierInstanceObject Soldier; // 0x30
    }; // 0x38
    static_assert(sizeof(UINewThingSoldierWeapons) == 0x38);
}
#pragma pack(pop)