// Object: ClientBFUIVehicleAppearanceSlotFilterEntity
// ClassId: 6405
// RuntimeId: 22810
// TypeInfo: 0x0000000144CA6AD0
#include "../Casablanca/ClientBFUIFilterEntityBase.h"

namespace Casablanca {
    class ClientBFUIVehicleAppearanceSlotFilterEntity : public Casablanca::ClientBFUIFilterEntityBase {
        char pad_0x38[0x80];
    }; // 0xB8
    static_assert(sizeof(ClientBFUIVehicleAppearanceSlotFilterEntity) == 0xB8);
}