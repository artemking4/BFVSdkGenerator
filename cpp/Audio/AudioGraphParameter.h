// Object: AudioGraphParameter
// ClassId: 1172
// RuntimeId: 62349
// TypeInfo: 0x0000000144E17CC0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Global/Uint16.h"

#pragma pack(push, 8)
namespace Audio {
    class AudioGraphParameter : public Core::DataContainer {
        Float32 DefaultValue; // 0x18
        Uint32 NameHash; // 0x1C
        Uint16 ValueIndex; // 0x20
        char pad_0x22[0x6];
    }; // 0x28
    static_assert(sizeof(AudioGraphParameter) == 0x28);
}
#pragma pack(pop)