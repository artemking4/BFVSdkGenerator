// Object: MorphTintPreset
// ClassId: 578
// RuntimeId: 46897
// TypeInfo: 0x0000000144EA30D0
#include "../Core/Asset.h"
#include "../MorphBase/MorphTintPresetChannel.h"

#pragma pack(push, 16)
namespace MorphBase {
    class MorphTintPreset : public Core::Asset {
        MorphBase::MorphTintPresetChannel RChannel; // 0x20
        MorphBase::MorphTintPresetChannel GChannel; // 0x60
        MorphBase::MorphTintPresetChannel BChannel; // 0xA0
        MorphBase::MorphTintPresetChannel AChannel; // 0xE0
    }; // 0x120
    static_assert(sizeof(MorphTintPreset) == 0x120);
}
#pragma pack(pop)