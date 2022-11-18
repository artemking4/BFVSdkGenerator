// Object: UINewThingSettings
// ClassId: 890
// RuntimeId: 12384
// TypeInfo: 0x0000000144D5D7E0
#include "../Core/Asset.h"
#include "../CasablancaShared/UINewThingTree.h"
#include "../CasablancaShared/UINewThingAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingSettings : public Core::Asset {
        CasablancaShared::UINewThingTree Tree; // 0x20
        CasablancaShared::UINewThingAsset Offers; // 0x28
    }; // 0x30
    static_assert(sizeof(UINewThingSettings) == 0x30);
}
#pragma pack(pop)