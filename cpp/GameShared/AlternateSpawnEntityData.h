// Object: AlternateSpawnEntityData
// ClassId: 3254
// RuntimeId: 58537
// TypeInfo: 0x0000000144E90960
#include "../Entity/SpatialEntityData.h"
#include "../GameShared/TeamId.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class AlternateSpawnEntityData : public Entity::SpatialEntityData {
        GameShared::TeamId Team; // 0x60
        Float32 Priority; // 0x64
        Boolean UseAsFallback; // 0x68
        Boolean Enabled; // 0x69
        char pad_0x6A[0x6];
    }; // 0x70
    static_assert(sizeof(AlternateSpawnEntityData) == 0x70);
}
#pragma pack(pop)