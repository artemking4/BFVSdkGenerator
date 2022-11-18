// Object: DraggingInteractionData
// ClassId: 4191
// RuntimeId: 44374
// TypeInfo: 0x0000000144C7DA00
#include "../Casablanca/SoldierInteractionData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class DraggingInteractionData : public Casablanca::SoldierInteractionData {
        Float32 StartThreshold; // 0x28
        Float32 OffsetRaycastY; // 0x2C
        Boolean SquadOnly; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(DraggingInteractionData) == 0x38);
}
#pragma pack(pop)