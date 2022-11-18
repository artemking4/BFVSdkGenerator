// Object: PathFollowingComponentData
// ClassId: 1819
// RuntimeId: 30258
// TypeInfo: 0x0000000144EABF00
#include "../Entity/GameComponentData.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace PathfindingShared {
    class PathFollowingComponentData : public Entity::GameComponentData {
        Float32 UpdatePathAtDistancePercent; // 0x80
        Uint32 PreferredPathfindingIndex; // 0x84
        Array<Uint32> AlternatePathfindingIndices; // 0x88
        Float32 MovementCorridorRadius; // 0x90
        char pad_0x94[0xC];
    }; // 0xA0
    static_assert(sizeof(PathFollowingComponentData) == 0xA0);
}
#pragma pack(pop)