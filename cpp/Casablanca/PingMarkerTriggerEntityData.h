// Object: PingMarkerTriggerEntityData
// ClassId: 3003
// RuntimeId: 49297
// TypeInfo: 0x0000000144C828C0
#include "../Entity/EntityData.h"
#include "../Casablanca/PingMarkerType.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Casablanca {
    class PingMarkerTriggerEntityData : public Entity::EntityData {
        Casablanca::PingMarkerType RequestType; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 PingMarkerWoldPositionOverride; // 0x30
        Float32 CurrentMapZoomFactor; // 0x40
        char pad_0x44[0xC];
    }; // 0x50
    static_assert(sizeof(PingMarkerTriggerEntityData) == 0x50);
}
#pragma pack(pop)