// Object: AISoundEmitterEntityData
// ClassId: 3252
// RuntimeId: 63068
// TypeInfo: 0x0000000144C07260
#include "../Entity/SpatialEntityData.h"
#include "../BattleAIShared/AISoundType.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/AISoundRestriction.h"
#include "../GameShared/TeamId.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AISoundEmitterEntityData : public Entity::SpatialEntityData {
        BattleAIShared::AISoundType Sound; // 0x60
        BattleAIShared::AISoundRestriction Restriction; // 0x64
        Array<GameShared::TeamId> Teams; // 0x68
        Boolean SendOnce; // 0x70
        char pad_0x71[0xF];
    }; // 0x80
    static_assert(sizeof(AISoundEmitterEntityData) == 0x80);
}
#pragma pack(pop)