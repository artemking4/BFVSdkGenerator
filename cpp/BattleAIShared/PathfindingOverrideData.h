// Object: PathfindingOverrideData
// ClassId: 2934
// RuntimeId: 62007
// TypeInfo: 0x0000000144C19430
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class PathfindingOverrideData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 PathSharingPenalty; // 0x24
        Float32 MaxPathSharingPenalty; // 0x28
        Boolean ApplyFromStart; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(PathfindingOverrideData) == 0x30);
}
#pragma pack(pop)