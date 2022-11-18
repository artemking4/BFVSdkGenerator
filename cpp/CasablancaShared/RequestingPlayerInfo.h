// Object: RequestingPlayerInfo
// ClassId: 4567
// RuntimeId: 12637
// TypeInfo: 0x0000000144D20370
#include "../Core/DataContainer.h"
#include "../Core/LinearTransform.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/OrderType.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class RequestingPlayerInfo : public Core::DataContainer {
        CasablancaShared::OrderType OrderType; // 0x18
        Boolean IsIncomingRequest; // 0x1C
        Boolean IsScannedRequest; // 0x1D
        Boolean IsScannedRequestLowOnSupplies; // 0x1E
        char pad_0x1F[0x1];
        Core::LinearTransform SoldierTransform; // 0x20
        Core::LinearTransform ScaleAndRotationTransform; // 0x60
    }; // 0xA0
    static_assert(sizeof(RequestingPlayerInfo) == 0xA0);
}
#pragma pack(pop)