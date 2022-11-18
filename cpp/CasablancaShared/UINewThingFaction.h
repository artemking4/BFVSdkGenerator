// Object: UINewThingFaction
// ClassId: 5295
// RuntimeId: 12535
// TypeInfo: 0x0000000144D5F060
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIFactionObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingFaction : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIFactionObject Faction; // 0x28
    }; // 0x30
    static_assert(sizeof(UINewThingFaction) == 0x30);
}
#pragma pack(pop)