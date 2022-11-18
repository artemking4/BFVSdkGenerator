// Object: DestructionPartComponentData
// ClassId: 1754
// RuntimeId: 55379
// TypeInfo: 0x0000000144F0DF40
#include "../Entity/GameComponentData.h"
#include "../Entity/GameObjectData.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Physics {
    class DestructionPartComponentData : public Entity::GameComponentData {
        Array<Entity::GameObjectData> Objects; // 0x80
        Uint32 PartIndex; // 0x88
        Boolean Fixed; // 0x8C
        Boolean Fragile; // 0x8D
        char pad_0x8E[0x2];
    }; // 0x90
    static_assert(sizeof(DestructionPartComponentData) == 0x90);
}
#pragma pack(pop)