// Object: MorphTintPresetGroup
// ClassId: 579
// RuntimeId: 50228
// TypeInfo: 0x0000000144EA3050
#include "../Core/Asset.h"
#include "../MorphBase/MorphTintPreset.h"

#pragma pack(push, 8)
namespace MorphBase {
    class MorphTintPresetGroup : public Core::Asset {
        Array<MorphBase::MorphTintPreset> Presets; // 0x20
    }; // 0x28
    static_assert(sizeof(MorphTintPresetGroup) == 0x28);
}
#pragma pack(pop)