// Object: BFUIKitBuildList
// ClassId: 1218
// RuntimeId: 65240
// TypeInfo: 0x0000000144D4C570
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUIKitBuild.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIKitBuildList : public Core::DataContainer {
        Array<CasablancaShared::BFUIKitBuild> Builds; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIKitBuildList) == 0x20);
}
#pragma pack(pop)