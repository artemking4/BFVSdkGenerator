// Object: IrReverbEntityData
// ClassId: 2815
// RuntimeId: 57335
// TypeInfo: 0x0000000144E1DEC0
#include "../Entity/EntityData.h"
#include "../Audio/ImpulseResponseAsset.h"
#include "../Global/Float32.h"
#include "../Audio/FadeCurveType.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class IrReverbEntityData : public Entity::EntityData {
        Audio::ImpulseResponseAsset ImpulseResponse; // 0x20
        Float32 Gain; // 0x28
        Float32 Volume; // 0x2C
        Audio::FadeCurveType FadeCurve; // 0x30
        Boolean IsDominant; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(IrReverbEntityData) == 0x38);
}
#pragma pack(pop)