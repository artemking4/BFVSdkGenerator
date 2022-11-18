// Object: PlayVFXEntityData
// ClassId: 3007
// RuntimeId: 61784
// TypeInfo: 0x0000000144E763C0
#include "../Entity/EntityData.h"
#include "../EffectBase/EffectBlueprint.h"
#include "../GameShared/VFXLocationControl.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace GameShared {
    class PlayVFXEntityData : public Entity::EntityData {
        EffectBase::EffectBlueprint VisualEffect; // 0x20
        char pad_0x28[0x8];
        GameShared::VFXLocationControl EffectLocation; // 0x30
        GameShared::VFXLocationControl LocationA; // 0x80
        GameShared::VFXLocationControl LocationB; // 0xD0
        GameShared::VFXLocationControl LocationC; // 0x120
        Core::LinearTransform RawTransformEffectLocation; // 0x170
        Core::LinearTransform RawTransformLocationA; // 0x1B0
        Core::LinearTransform RawTransformLocationB; // 0x1F0
        Core::LinearTransform RawTransformLocationC; // 0x230
    }; // 0x270
    static_assert(sizeof(PlayVFXEntityData) == 0x270);
}
#pragma pack(pop)