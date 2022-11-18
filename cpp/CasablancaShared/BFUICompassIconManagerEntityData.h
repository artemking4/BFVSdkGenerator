// Object: BFUICompassIconManagerEntityData
// ClassId: 2173
// RuntimeId: 15630
// TypeInfo: 0x0000000144D2F920
#include "../Entity/EntityData.h"
#include "../CasablancaShared/CompassIconPriorityList.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/RequestingPlayers.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUICompassIconManagerEntityData : public Entity::EntityData {
        CasablancaShared::CompassIconPriorityList DrawOrderPriority; // 0x20
        CasablancaShared::CompassIconPriorityList DistanceFilterPriority; // 0x28
        Float32 CompassFov; // 0x30
        Float32 InfoZoneFovRatio; // 0x34
        CasablancaShared::RequestingPlayers CommoRoseRequests; // 0x38
        Boolean CreateIconForScannedRequest; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(BFUICompassIconManagerEntityData) == 0x48);
}
#pragma pack(pop)