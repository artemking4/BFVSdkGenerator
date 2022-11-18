// Object: ClientBFUIVehicleAppearanceCompareEntity
// ClassId: 6504
// RuntimeId: 35064
// TypeInfo: 0x0000000144CA7680
#include "../Casablanca/ClientBFUIObjectCompareEntity.h"

namespace Casablanca {
    class ClientBFUIVehicleAppearanceCompareEntity : public Casablanca::ClientBFUIObjectCompareEntity {
        char pad_0x48[0x20];
    }; // 0x68
    static_assert(sizeof(ClientBFUIVehicleAppearanceCompareEntity) == 0x68);
}