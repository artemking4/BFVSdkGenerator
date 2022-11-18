// Object: CharacterStateRequestDataBase
// ClassId: 1399
// RuntimeId: 63124
// TypeInfo: 0x0000000144DE8690
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class CharacterStateRequestDataBase : public Core::DataContainer {
        Uint32 Hash; // 0x18
        Float32 StaticDelay; // 0x1C
        Float32 MaxDuration; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(CharacterStateRequestDataBase) == 0x28);
}
#pragma pack(pop)