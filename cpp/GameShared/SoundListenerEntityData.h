// Object: SoundListenerEntityData
// ClassId: 3234
// RuntimeId: 8371
// TypeInfo: 0x0000000144E6D7D0
#include "../Entity/EntityData.h"
#include "../Core/LocalPlayerId.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/LinearTransform.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace GameShared {
    class SoundListenerEntityData : public Entity::EntityData {
        Core::LocalPlayerId LocalPlayerId; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform Transform; // 0x30
        Core::Vec3 Velocity; // 0x70
        Core::Vec3 PanningPosition; // 0x80
        Float32 Fov; // 0x90
        Float32 Radius; // 0x94
        Boolean PreserveVelocity; // 0x98
        char pad_0x99[0x7];
    }; // 0xA0
    static_assert(sizeof(SoundListenerEntityData) == 0xA0);
}
#pragma pack(pop)