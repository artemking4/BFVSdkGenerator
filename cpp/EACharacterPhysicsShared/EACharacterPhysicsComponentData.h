// Object: EACharacterPhysicsComponentData
// ClassId: 1762
// RuntimeId: 61878
// TypeInfo: 0x0000000144DFA3E0
#include "../Entity/GameComponentData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Entity/MaterialDecl.h"
#include "../Entity/ObjectBlueprint.h"
#include "../Physics/PhysicsEntityData.h"

#pragma pack(push, 16)
namespace EACharacterPhysicsShared {
    class EACharacterPhysicsComponentData : public Entity::GameComponentData {
        Core::Realm Realm; // 0x80
        Entity::MaterialDecl MaterialPair; // 0x84
        Entity::ObjectBlueprint PhysicsBlueprint; // 0x88
        Physics::PhysicsEntityData PhysicsEntity; // 0x90
        Array<Entity::MaterialDecl> BoneMaterials; // 0x98
        Boolean UseServerRagdoll; // 0xA0
        Boolean ClientAuthoritative; // 0xA1
        Boolean EffectsWorldOnly; // 0xA2
        char pad_0xA3[0xD];
    }; // 0xB0
    static_assert(sizeof(EACharacterPhysicsComponentData) == 0xB0);
}
#pragma pack(pop)