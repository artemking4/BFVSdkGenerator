// Object: UINewThingSoldierArchetype
// ClassId: 5302
// RuntimeId: 39588
// TypeInfo: 0x0000000144D5EDE0
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingSoldierArchetype : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUISoldierInstanceObject Soldier; // 0x28
    }; // 0x30
    static_assert(sizeof(UINewThingSoldierArchetype) == 0x30);
}
#pragma pack(pop)