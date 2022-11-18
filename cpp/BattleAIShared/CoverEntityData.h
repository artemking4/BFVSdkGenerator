// Object: CoverEntityData
// ClassId: 3346
// RuntimeId: 15047
// TypeInfo: 0x0000000144C182B0
#include "../Entity/SpatialEntityData.h"
#include "../Global/Float32.h"
#include "../BattleAIShared/CoverData.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class CoverEntityData : public Entity::SpatialEntityData {
        Float32 MaxSideStepRadius; // 0x60
        char pad_0x64[0x4];
        Array<BattleAIShared::CoverData> Covers; // 0x68
    }; // 0x70
    static_assert(sizeof(CoverEntityData) == 0x70);
}
#pragma pack(pop)