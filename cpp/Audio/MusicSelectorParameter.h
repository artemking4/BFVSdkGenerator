// Object: MusicSelectorParameter
// ClassId: 4345
// RuntimeId: 31193
// TypeInfo: 0x0000000144E1D1C0
#include "../Audio/MusicSelectorBase.h"
#include "../Audio/MusicParameterData.h"
#include "../Audio/ParameterBoundSelector.h"

#pragma pack(push, 8)
namespace Audio {
    class MusicSelectorParameter : public Audio::MusicSelectorBase {
        Audio::MusicParameterData Parameter; // 0x20
        Array<Audio::ParameterBoundSelector> Selectors; // 0x28
    }; // 0x30
    static_assert(sizeof(MusicSelectorParameter) == 0x30);
}
#pragma pack(pop)