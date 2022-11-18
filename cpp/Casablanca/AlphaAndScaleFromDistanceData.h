// Object: AlphaAndScaleFromDistanceData
// ClassId: 2044
// RuntimeId: 63318
// TypeInfo: 0x0000000144C1D400
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class AlphaAndScaleFromDistanceData : public Entity::EntityData {
        Float32 ChangeTreshold; // 0x20
        Int32 FramesPerTick; // 0x24
        Float32 LerpTime; // 0x28
        Float32 NearLimit; // 0x2C
        Float32 FarLimit; // 0x30
        Float32 HideNearDistance; // 0x34
        Float32 HideFarDistance; // 0x38
        Float32 MinAlpha; // 0x3C
        Float32 MaxAlpha; // 0x40
        Float32 MinScale; // 0x44
        Float32 MaxScale; // 0x48
        Float32 BinoLerp; // 0x4C
        Float32 BinoDelay; // 0x50
        Float32 BinoAlpha; // 0x54
        Float32 BinoScale; // 0x58
        Float32 Distance; // 0x5C
        Boolean Active; // 0x60
        Boolean UseLink; // 0x61
        Boolean OverrideFull; // 0x62
        Boolean Bino; // 0x63
        char pad_0x64[0x4];
    }; // 0x68
    static_assert(sizeof(AlphaAndScaleFromDistanceData) == 0x68);
}
#pragma pack(pop)