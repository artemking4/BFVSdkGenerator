// Object: ClientComponentConstraintEntity
// ClassId: 6640
// RuntimeId: 35301
// TypeInfo: 0x0000000144F701E0
#include "../Vehicle/ClientComponentTransformEntityBase.h"

namespace Vehicle {
    class ClientComponentConstraintEntity : public Vehicle::ClientComponentTransformEntityBase {
        char pad_0x220[0x1B0];
    }; // 0x3D0
    static_assert(sizeof(ClientComponentConstraintEntity) == 0x3D0);
}