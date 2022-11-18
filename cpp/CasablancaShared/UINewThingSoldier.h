// Object: UINewThingSoldier
// ClassId: 5297
// RuntimeId: 19309
// TypeInfo: 0x0000000144D5EEE0
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIFactionObject.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingSoldier : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIFactionObject Faction; // 0x28
        CasablancaShared::BFUISoldierInstanceObject Soldier; // 0x30
    }; // 0x38
    static_assert(sizeof(UINewThingSoldier) == 0x38);
}
#pragma pack(pop)