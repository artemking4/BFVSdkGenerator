// Object: BFUIOnlineStatList
// ClassId: 1232
// RuntimeId: 774
// TypeInfo: 0x0000000144D81EA0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUIOnlineStat.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIOnlineStatList : public Core::DataContainer {
        Array<CasablancaShared::BFUIOnlineStat> Stats; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIOnlineStatList) == 0x20);
}
#pragma pack(pop)