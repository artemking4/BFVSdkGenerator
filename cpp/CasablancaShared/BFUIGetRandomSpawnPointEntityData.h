// Object: BFUIGetRandomSpawnPointEntityData
// ClassId: 2240
// RuntimeId: 40299
// TypeInfo: 0x0000000144D1EEF0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetRandomSpawnPointEntityData : public Entity::EntityData {
        Boolean UpdateAutomatically; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(BFUIGetRandomSpawnPointEntityData) == 0x28);
}
#pragma pack(pop)