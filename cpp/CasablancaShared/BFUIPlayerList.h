// Object: BFUIPlayerList
// ClassId: 1236
// RuntimeId: 62186
// TypeInfo: 0x0000000144D80020
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUIPlayerObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIPlayerList : public Core::DataContainer {
        Array<CasablancaShared::BFUIPlayerObject> Players; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIPlayerList) == 0x20);
}
#pragma pack(pop)