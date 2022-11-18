// Object: ClientFollowRaycastEntity
// ClassId: 6642
// RuntimeId: 24558
// TypeInfo: 0x0000000144F6FEB0
#include "../Vehicle/ClientComponentTransformEntityBase.h"

namespace Vehicle {
    class ClientFollowRaycastEntity : public Vehicle::ClientComponentTransformEntityBase {
        char pad_0x220[0x150];
    }; // 0x370
    static_assert(sizeof(ClientFollowRaycastEntity) == 0x370);
}