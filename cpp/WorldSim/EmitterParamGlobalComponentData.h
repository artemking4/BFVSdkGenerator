// Object: EmitterParamGlobalComponentData
// ClassId: 1885
// RuntimeId: 22462
// TypeInfo: 0x0000000144EC12C0
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../EffectBase/EffectParameter.h"
#include "../Core/Vec4.h"
#include "../Global/Uint8.h"

#pragma pack(push, 16)
namespace WorldSim {
    class EmitterParamGlobalComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec4 Value; // 0x90
        EffectBase::EffectParameter Parameter; // 0xA0
        Uint8 FieldFlagOverride0; // 0xA8
        char pad_0xA9[0x7];
    }; // 0xB0
    static_assert(sizeof(EmitterParamGlobalComponentData) == 0xB0);
}
#pragma pack(pop)