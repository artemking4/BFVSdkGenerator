// Object: UINewThingSoldierVisuals
// ClassId: 5306
// RuntimeId: 11094
// TypeInfo: 0x0000000144D5ED60
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIFactionObject.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingSoldierVisuals : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIFactionObject Faction; // 0x28
        CasablancaShared::BFUISoldierInstanceObject Soldier; // 0x30
    }; // 0x38
    static_assert(sizeof(UINewThingSoldierVisuals) == 0x38);
}
#pragma pack(pop)