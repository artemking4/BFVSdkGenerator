// Object: AreaProximityEntityData
// ClassId: 2060
// RuntimeId: 56235
// TypeInfo: 0x0000000144E76A40
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../Core/LocalPlayerId.h"

#pragma pack(push, 8)
namespace GameShared {
    class AreaProximityEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 ProximityDistance; // 0x24
        Array<Core::Vec3> AdditionalWaterCheckPositions; // 0x28
        Core::LocalPlayerId LocalPlayerId; // 0x30
        Boolean AutoStart; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(AreaProximityEntityData) == 0x38);
}
#pragma pack(pop)