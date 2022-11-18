// Object: CoastlineQueryEntityData
// ClassId: 2516
// RuntimeId: 6497
// TypeInfo: 0x0000000144BE0870
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Guid.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../AmbienceShared/CoastlineAngleUnit.h"
#include "../Core/LocalPlayerId.h"

#pragma pack(push, 8)
namespace AmbienceShared {
    class CoastlineQueryEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Guid WaterSurfaceGuid; // 0x24
        Float32 DetectionRadius; // 0x34
        Float32 InnerRadiusProportion; // 0x38
        Uint32 CoastlinePointCount; // 0x3C
        AmbienceShared::CoastlineAngleUnit EncompassingAngleUnit; // 0x40
        Core::LocalPlayerId LocalPlayer; // 0x44
    }; // 0x48
    static_assert(sizeof(CoastlineQueryEntityData) == 0x48);
}
#pragma pack(pop)