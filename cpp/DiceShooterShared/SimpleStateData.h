// Object: SimpleStateData
// ClassId: 4624
// RuntimeId: 41663
// TypeInfo: 0x0000000144DF1950
#include "../Core/DataContainer.h"
#include "../Global/Guid.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class SimpleStateData : public Core::DataContainer {
        Guid Key; // 0x18
    }; // 0x28
    static_assert(sizeof(SimpleStateData) == 0x28);
}
#pragma pack(pop)