// Object: CharacterStatePublicChannelData
// ClassId: 1387
// RuntimeId: 56188
// TypeInfo: 0x0000000144EFB430
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStatePublicChannelData : public Core::DataContainer {
        Uint32 Hash; // 0x18
        char pad_0x1C[0x4];
        CString Name; // 0x20
    }; // 0x28
    static_assert(sizeof(CharacterStatePublicChannelData) == 0x28);
}
#pragma pack(pop)