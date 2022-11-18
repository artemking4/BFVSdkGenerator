// Object: PhysicsProxyEntityData
// ClassId: 3345
// RuntimeId: 3978
// TypeInfo: 0x0000000144F0F700
#include "../Entity/ComponentEntityData.h"
#include "../Core/Realm.h"
#include "../Physics/PhysicsEntityData.h"

#pragma pack(push, 16)
namespace Physics {
    class PhysicsProxyEntityData : public Entity::ComponentEntityData {
        Core::Realm Realm; // 0x80
        char pad_0x84[0x4];
        Physics::PhysicsEntityData PhysicsData; // 0x88
    }; // 0x90
    static_assert(sizeof(PhysicsProxyEntityData) == 0x90);
}
#pragma pack(pop)