// Object: UpdateBeamPointData
// ClassId: 4504
// RuntimeId: 1981
// TypeInfo: 0x0000000144E2B140
#include "../Emitter/ProcessorData.h"
#include "../Global/Uint32.h"
#include "../Core/Vec4.h"
#include "../Emitter/LocationSelection.h"
#include "../Emitter/ParamOverrideSelection.h"

#pragma pack(push, 16)
namespace Emitter {
    class UpdateBeamPointData : public Emitter::ProcessorData {
        Uint32 NumPoints; // 0x38
        Uint32 NumCtrlPoints; // 0x3C
        Core::Vec4 TaperCoefficients; // 0x40
        Core::Vec4 AttractorCoefficients; // 0x50
        Core::Vec4 ParamCoefficients; // 0x60
        Emitter::LocationSelection Attractor; // 0x70
        Emitter::ParamOverrideSelection ParamOverride; // 0x74
        char pad_0x78[0x8];
    }; // 0x80
    static_assert(sizeof(UpdateBeamPointData) == 0x80);
}
#pragma pack(pop)