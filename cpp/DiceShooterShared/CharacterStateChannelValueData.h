// Object: CharacterStateChannelValueData
// ClassId: 1369
// RuntimeId: 63102
// TypeInfo: 0x0000000144DF8AC0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class CharacterStateChannelValueData : public Core::DataContainer {
        Boolean SetValueOnTryActivate; // 0x18
        Boolean ResetValueOnFailActivate; // 0x19
        char pad_0x1A[0x6];
    }; // 0x20
    static_assert(sizeof(CharacterStateChannelValueData) == 0x20);
}
#pragma pack(pop)