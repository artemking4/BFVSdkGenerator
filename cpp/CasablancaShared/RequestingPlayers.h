// Object: RequestingPlayers
// ClassId: 4568
// RuntimeId: 12344
// TypeInfo: 0x0000000144D202F0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/RequestingPlayerInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class RequestingPlayers : public Core::DataContainer {
        Array<CasablancaShared::RequestingPlayerInfo> Players; // 0x18
    }; // 0x20
    static_assert(sizeof(RequestingPlayers) == 0x20);
}
#pragma pack(pop)