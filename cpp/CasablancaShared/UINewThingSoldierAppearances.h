// Object: UINewThingSoldierAppearances
// ClassId: 5301
// RuntimeId: 38605
// TypeInfo: 0x0000000144D5EBE0
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingSoldierAppearances : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUISoldierInstanceObject Soldier; // 0x28
    }; // 0x30
    static_assert(sizeof(UINewThingSoldierAppearances) == 0x30);
}
#pragma pack(pop)