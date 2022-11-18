// Object: SoldierManDownInteractionData
// ClassId: 4194
// RuntimeId: 34420
// TypeInfo: 0x0000000144C7E100
#include "../Casablanca/SoldierInteractionData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class SoldierManDownInteractionData : public Casablanca::SoldierInteractionData {
        Boolean SquadOnly; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(SoldierManDownInteractionData) == 0x30);
}
#pragma pack(pop)