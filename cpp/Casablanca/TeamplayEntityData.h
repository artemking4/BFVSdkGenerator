// Object: TeamplayEntityData
// ClassId: 3557
// RuntimeId: 60637
// TypeInfo: 0x0000000144C321F0
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class TeamplayEntityData : public Entity::EntityData {
        Float32 MaxDistance; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(TeamplayEntityData) == 0x28);
}
#pragma pack(pop)