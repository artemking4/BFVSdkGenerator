// Object: UINewThingSoldierArchetypes
// ClassId: 5303
// RuntimeId: 58997
// TypeInfo: 0x0000000144D5EE60
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIFactionObject.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingSoldierArchetypes : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIFactionObject Faction; // 0x28
        CasablancaShared::BFUISoldierInstanceObject Soldier; // 0x30
    }; // 0x38
    static_assert(sizeof(UINewThingSoldierArchetypes) == 0x38);
}
#pragma pack(pop)