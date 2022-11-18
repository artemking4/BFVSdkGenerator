// Object: DebugSphereEntityData
// ClassId: 2611
// RuntimeId: 5022
// TypeInfo: 0x0000000144C82D40
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/LinearTransform.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Casablanca {
    class DebugSphereEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform Transform; // 0x30
        Core::Vec3 Position; // 0x70
        Core::Vec3 Color; // 0x80
        Float32 Radius; // 0x90
        Float32 Alpha; // 0x94
        Boolean DepthTest; // 0x98
        Boolean Enabled; // 0x99
        char pad_0x9A[0x6];
    }; // 0xA0
    static_assert(sizeof(DebugSphereEntityData) == 0xA0);
}
#pragma pack(pop)