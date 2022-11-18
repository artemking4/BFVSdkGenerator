// Object: UINewThingSoldiers
// ClassId: 5316
// RuntimeId: 42243
// TypeInfo: 0x0000000144D5EFE0
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIFactionObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingSoldiers : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIFactionObject Faction; // 0x28
    }; // 0x30
    static_assert(sizeof(UINewThingSoldiers) == 0x30);
}
#pragma pack(pop)