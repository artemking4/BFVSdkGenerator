// Object: AudioGraphParameterConfigData
// ClassId: 1176
// RuntimeId: 35176
// TypeInfo: 0x0000000144E178C0
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Audio {
    class AudioGraphParameterConfigData : public Core::DataContainer {
        Uint32 NameHash; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(AudioGraphParameterConfigData) == 0x20);
}
#pragma pack(pop)