// Object: MusicParameterData
// ClassId: 4335
// RuntimeId: 47024
// TypeInfo: 0x0000000144E1DA40
#include "../Audio/MusicInputData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class MusicParameterData : public Audio::MusicInputData {
        Float32 DefaultValue; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(MusicParameterData) == 0x30);
}
#pragma pack(pop)