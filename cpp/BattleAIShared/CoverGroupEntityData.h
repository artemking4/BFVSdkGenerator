// Object: CoverGroupEntityData
// ClassId: 2556
// RuntimeId: 39022
// TypeInfo: 0x0000000144C06760
#include "../Entity/EntityData.h"
#include "../BattleAIShared/CoverGridData.h"
#include "../BattleAIShared/CoverData.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class CoverGroupEntityData : public Entity::EntityData {
        BattleAIShared::CoverGridData Grid; // 0x20
        Array<BattleAIShared::CoverData> Covers; // 0x48
    }; // 0x50
    static_assert(sizeof(CoverGroupEntityData) == 0x50);
}
#pragma pack(pop)