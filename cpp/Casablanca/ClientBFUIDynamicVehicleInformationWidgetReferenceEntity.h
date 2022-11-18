// Object: ClientBFUIDynamicVehicleInformationWidgetReferenceEntity
// ClassId: 8279
// RuntimeId: 1394
// TypeInfo: 0x0000000144CA0C30
#include "../DiceCommons/WidgetReferenceEntity.h"

namespace Casablanca {
    class ClientBFUIDynamicVehicleInformationWidgetReferenceEntity : public DiceCommons::WidgetReferenceEntity {
        char pad_0x60[0x28];
    }; // 0x88
    static_assert(sizeof(ClientBFUIDynamicVehicleInformationWidgetReferenceEntity) == 0x88);
}