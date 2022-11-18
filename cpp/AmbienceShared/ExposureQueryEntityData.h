// Object: ExposureQueryEntityData
// ClassId: 2730
// RuntimeId: 37506
// TypeInfo: 0x0000000144BE0770
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/LocalPlayerId.h"
#include "../AmbienceShared/AmbienceQueryMethod.h"

#pragma pack(push, 8)
namespace AmbienceShared {
    class ExposureQueryEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Core::LocalPlayerId LocalPlayer; // 0x24
        AmbienceShared::AmbienceQueryMethod QueryMethod; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(ExposureQueryEntityData) == 0x30);
}
#pragma pack(pop)