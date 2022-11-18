// Object: AIEvadeVolumeComponentData
// ClassId: 1697
// RuntimeId: 24155
// TypeInfo: 0x0000000144BFF3D0
#include "../Entity/GameComponentData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/AIEvadeVolumeEntityData.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AIEvadeVolumeComponentData : public Entity::GameComponentData {
        Core::Realm Realm; // 0x80
        char pad_0x84[0x4];
        BattleAIShared::AIEvadeVolumeEntityData AIEvadeVolumeEntity; // 0x88
        Boolean EnableOnInit; // 0x90
        char pad_0x91[0xF];
    }; // 0xA0
    static_assert(sizeof(AIEvadeVolumeComponentData) == 0xA0);
}
#pragma pack(pop)