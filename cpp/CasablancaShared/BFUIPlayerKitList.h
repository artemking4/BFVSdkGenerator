// Object: BFUIPlayerKitList
// ClassId: 1234
// RuntimeId: 5199
// TypeInfo: 0x0000000144D87020
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUIPlayerKitObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIPlayerKitList : public Core::DataContainer {
        Array<CasablancaShared::BFUIPlayerKitObject> Kits; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIPlayerKitList) == 0x20);
}
#pragma pack(pop)