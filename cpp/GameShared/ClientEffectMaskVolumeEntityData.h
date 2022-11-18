// Object: ClientEffectMaskVolumeEntityData
// ClassId: 2481
// RuntimeId: 14250
// TypeInfo: 0x0000000144E6D2D0
#include "../Entity/EntityData.h"
#include "../Core/Vec4.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace GameShared {
    class ClientEffectMaskVolumeEntityData : public Entity::EntityData {
        Float32 LifeTimeInSeconds; // 0x20
        char pad_0x24[0xC];
        Core::Vec4 ApplyEffectCurve; // 0x30
        Float32 UpdatePeriodInSeconds; // 0x40
        Float32 Radius; // 0x44
        char pad_0x48[0x8];
    }; // 0x50
    static_assert(sizeof(ClientEffectMaskVolumeEntityData) == 0x50);
}
#pragma pack(pop)