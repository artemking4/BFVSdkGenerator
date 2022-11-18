// Object: MeshAssemblerEntityData
// ClassId: 2885
// RuntimeId: 62559
// TypeInfo: 0x0000000144DB6710
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DiceCommonsShared/CharacterDefinition.h"
#include "../DiceCommonsShared/MeshRuntimeData.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class MeshAssemblerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        DiceCommonsShared::CharacterDefinition CharacterDefinition; // 0x28
        Array<DiceCommonsShared::MeshRuntimeData> MeshData; // 0x30
    }; // 0x38
    static_assert(sizeof(MeshAssemblerEntityData) == 0x38);
}
#pragma pack(pop)