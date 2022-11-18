// Object: NetGraphInfoTypeSettings
// ClassId: 591
// RuntimeId: 37181
// TypeInfo: 0x0000000144D888A0
#include "../Core/Asset.h"
#include "../CasablancaShared/NetGraphInfoTypeProperties.h"
#include "../CasablancaShared/NetGraphInfoTypeData.h"
#include "../GameShared/UIElementColor.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class NetGraphInfoTypeSettings : public Core::Asset {
        Array<CasablancaShared::NetGraphInfoTypeProperties> InfoTypeProperties; // 0x20
        char pad_0x28[0x8];
        CasablancaShared::NetGraphInfoTypeData DefaultValues; // 0x30
        GameShared::UIElementColor CriticalValueColor; // 0x70
    }; // 0x90
    static_assert(sizeof(NetGraphInfoTypeSettings) == 0x90);
}
#pragma pack(pop)