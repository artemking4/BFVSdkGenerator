// Object: AddFakeCollisionEntityData
// ClassId: 2025
// RuntimeId: 6206
// TypeInfo: 0x0000000144F0DA40
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Entity/MaterialDecl.h"

#pragma pack(push, 16)
namespace Physics {
    class AddFakeCollisionEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Position; // 0x30
        Core::Vec3 Normal; // 0x40
        Core::Vec3 ImpulseDirection; // 0x50
        Uint32 PartIndex; // 0x60
        Float32 Speed; // 0x64
        Entity::MaterialDecl Material; // 0x68
        Float32 ImpulseMagnitude; // 0x6C
        Float32 Damage; // 0x70
        Boolean ApplyToAllParts; // 0x74
        char pad_0x75[0xB];
    }; // 0x80
    static_assert(sizeof(AddFakeCollisionEntityData) == 0x80);
}
#pragma pack(pop)