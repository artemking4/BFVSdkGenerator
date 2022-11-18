// Object: MusicInputData
// ClassId: 4333
// RuntimeId: 4998
// TypeInfo: 0x0000000144E1DB40
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Audio {
    class MusicInputData : public Core::DataContainer {
        CString Name; // 0x18
        Uint32 NameHash; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(MusicInputData) == 0x28);
}
#pragma pack(pop)