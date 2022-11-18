// Object: RetreatingPlayerList
// ClassId: 4570
// RuntimeId: 60214
// TypeInfo: 0x0000000144D20470
#include "../Core/DataContainer.h"
#include "../CasablancaShared/RetreatingPlayerInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class RetreatingPlayerList : public Core::DataContainer {
        Array<CasablancaShared::RetreatingPlayerInfo> Players; // 0x18
    }; // 0x20
    static_assert(sizeof(RetreatingPlayerList) == 0x20);
}
#pragma pack(pop)