// Object: AIConcealmentVolumeEntityData
// ClassId: 1975
// RuntimeId: 42789
// TypeInfo: 0x0000000144C069E0
#include "../Entity/EntityData.h"
#include "../BattleAIShared/AIConcealmentVolumeData.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIConcealmentVolumeEntityData : public Entity::EntityData {
        BattleAIShared::AIConcealmentVolumeData VolumeData; // 0x20
    }; // 0x28
    static_assert(sizeof(AIConcealmentVolumeEntityData) == 0x28);
}
#pragma pack(pop)