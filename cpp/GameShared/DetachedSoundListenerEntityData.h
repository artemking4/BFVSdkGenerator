// Object: DetachedSoundListenerEntityData
// ClassId: 2621
// RuntimeId: 14504
// TypeInfo: 0x0000000144E6D750
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../Core/LinearTransform.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace GameShared {
    class DetachedSoundListenerEntityData : public Entity::EntityData {
        Float32 Fov; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform Transform; // 0x30
        Core::Vec3 Velocity; // 0x70
        Core::Vec3 PanningPosition; // 0x80
        Float32 Radius; // 0x90
        char pad_0x94[0xC];
    }; // 0xA0
    static_assert(sizeof(DetachedSoundListenerEntityData) == 0xA0);
}
#pragma pack(pop)