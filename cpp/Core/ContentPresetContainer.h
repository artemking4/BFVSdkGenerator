// Object: ContentPresetContainer
// ClassId: 226
// RuntimeId: 52156
// TypeInfo: 0x0000000144BE83F0
#include "../Core/Asset.h"
#include "../Core/ContentPreset.h"

#pragma pack(push, 8)
namespace Core {
    class ContentPresetContainer : public Core::Asset {
        Array<Core::ContentPreset> Presets; // 0x20
    }; // 0x28
    static_assert(sizeof(ContentPresetContainer) == 0x28);
}
#pragma pack(pop)