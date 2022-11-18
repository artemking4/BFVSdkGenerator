// Object: EffectReferenceObjectData
// ClassId: 3973
// RuntimeId: 33825
// TypeInfo: 0x0000000144E235A0
#include "../Entity/SpatialReferenceObjectData.h"
#include "../Global/Boolean.h"
#include "../EffectBase/EffectParameter.h"

#pragma pack(push, 16)
namespace EffectBase {
    class EffectReferenceObjectData : public Entity::SpatialReferenceObjectData {
        Array<EffectBase::EffectParameter> EffectParameters; // 0xC0
        Boolean AutoStart; // 0xC8
        Boolean AffectedByLightprobeVisibility; // 0xC9
        char pad_0xCA[0x6];
    }; // 0xD0
    static_assert(sizeof(EffectReferenceObjectData) == 0xD0);
}
#pragma pack(pop)