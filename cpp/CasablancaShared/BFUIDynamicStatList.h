// Object: BFUIDynamicStatList
// ClassId: 1207
// RuntimeId: 5451
// TypeInfo: 0x0000000144D7EC20
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUIDynamicStat.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIDynamicStatList : public Core::DataContainer {
        Array<CasablancaShared::BFUIDynamicStat> Stats; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIDynamicStatList) == 0x20);
}
#pragma pack(pop)