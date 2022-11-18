// Object: MixGroup
// ClassId: 4301
// RuntimeId: 54801
// TypeInfo: 0x0000000144E16E40
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Uint16.h"
#include "../Audio/MixGroupPropertyParameters.h"

#pragma pack(push, 8)
namespace Audio {
    class MixGroup : public Core::DataContainer {
        CString Name; // 0x18
        Array<Audio::MixGroupPropertyParameters> Parameters; // 0x20
        Uint16 GroupIndex; // 0x28
        Uint16 ParentGroupIndex; // 0x2A
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(MixGroup) == 0x30);
}
#pragma pack(pop)