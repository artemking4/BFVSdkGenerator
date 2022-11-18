// Object: SoundContextData
// ClassId: 4661
// RuntimeId: 4700
// TypeInfo: 0x0000000144E16140
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundContextData : public Core::DataContainer {
        CString Name; // 0x18
    }; // 0x20
    static_assert(sizeof(SoundContextData) == 0x20);
}
#pragma pack(pop)