// Object: ClientCopyWheelRotationEntity
// ClassId: 6641
// RuntimeId: 60973
// TypeInfo: 0x0000000144F700D0
#include "../Vehicle/ClientComponentTransformEntityBase.h"

namespace Vehicle {
    class ClientCopyWheelRotationEntity : public Vehicle::ClientComponentTransformEntityBase {
        char pad_0x220[0x78];
    }; // 0x298
    static_assert(sizeof(ClientCopyWheelRotationEntity) == 0x298);
}