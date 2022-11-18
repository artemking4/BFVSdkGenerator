// Object: AIConcealmentComponentData
// ClassId: 1695
// RuntimeId: 4684
// TypeInfo: 0x0000000144BFF0D0
#include "../Entity/GameComponentData.h"
#include "../BattleAIShared/ConcealmentType.h"
#include "../BattleAIShared/ConcealmentOrigin.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AIConcealmentComponentData : public Entity::GameComponentData {
        BattleAIShared::ConcealmentType ConcealmentType; // 0x80
        BattleAIShared::ConcealmentOrigin ConcealmentOrigin; // 0x84
        Float32 CylinderRadius; // 0x88
        Float32 CylinderHeight; // 0x8C
        Float32 TimeToLive; // 0x90
        Float32 InitialDelay; // 0x94
        char pad_0x98[0x8];
    }; // 0xA0
    static_assert(sizeof(AIConcealmentComponentData) == 0xA0);
}
#pragma pack(pop)