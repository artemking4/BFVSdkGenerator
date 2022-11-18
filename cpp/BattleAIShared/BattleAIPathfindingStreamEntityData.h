// Object: BattleAIPathfindingStreamEntityData
// ClassId: 2936
// RuntimeId: 55931
// TypeInfo: 0x0000000144C05CE0
#include "../PathfindingShared/PathfindingStreamEntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class BattleAIPathfindingStreamEntityData : public PathfindingShared::PathfindingStreamEntityData {
        Core::Realm Realm; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(BattleAIPathfindingStreamEntityData) == 0x38);
}
#pragma pack(pop)