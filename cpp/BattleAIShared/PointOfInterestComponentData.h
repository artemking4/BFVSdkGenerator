// Object: PointOfInterestComponentData
// ClassId: 1824
// RuntimeId: 18690
// TypeInfo: 0x0000000144C19030
#include "../Entity/GameComponentData.h"
#include "../Global/Float32.h"
#include "../BattleAIShared/AISoundType.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/AISoundRestriction.h"
#include "../GameShared/TeamId.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class PointOfInterestComponentData : public Entity::GameComponentData {
        Float32 DetectionRadius; // 0x80
        Float32 TimeToLive; // 0x84
        BattleAIShared::AISoundType Sound; // 0x88
        BattleAIShared::AISoundRestriction Restriction; // 0x8C
        Array<GameShared::TeamId> Teams; // 0x90
        Boolean SendOnce; // 0x98
        char pad_0x99[0x7];
    }; // 0xA0
    static_assert(sizeof(PointOfInterestComponentData) == 0xA0);
}
#pragma pack(pop)