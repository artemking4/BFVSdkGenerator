// Object: SpawnpointTestingEntityData
// ClassId: 3490
// RuntimeId: 27811
// TypeInfo: 0x0000000144D5AEE0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SpawnpointTestingEntityData : public Entity::EntityData {
        Boolean IsEnabled; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(SpawnpointTestingEntityData) == 0x28);
}
#pragma pack(pop)