// Object: PingMarkerManagerEntityData
// ClassId: 3002
// RuntimeId: 35533
// TypeInfo: 0x0000000144C82940
#include "../Entity/EntityData.h"
#include "../Casablanca/PingMarkerSetting.h"
#include "../Casablanca/PingMarkerType.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class PingMarkerManagerEntityData : public Entity::EntityData {
        Array<Casablanca::PingMarkerSetting> Settings; // 0x20
        Casablanca::PingMarkerType MarkerType; // 0x28
        Int32 RequestInputAction; // 0x2C
        Boolean SharePingsWithVehicleOccupants; // 0x30
        Boolean Enabled; // 0x31
        char pad_0x32[0x6];
    }; // 0x38
    static_assert(sizeof(PingMarkerManagerEntityData) == 0x38);
}
#pragma pack(pop)