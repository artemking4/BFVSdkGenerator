// Object: HeatMapEntityData
// ClassId: 3378
// RuntimeId: 32245
// TypeInfo: 0x0000000144BEF2E0
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace BattleAI {
    class HeatMapEntityData : public Entity::SpatialEntityData {
        Float32 WorldPixelSize; // 0x60
        Int32 HeatMapWidth; // 0x64
        Int32 HeatMapHeight; // 0x68
        Boolean Enabled; // 0x6C
        char pad_0x6D[0x3];
    }; // 0x70
    static_assert(sizeof(HeatMapEntityData) == 0x70);
}
#pragma pack(pop)