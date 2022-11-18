// Object: BaseDefinition
// ClassId: 309
// RuntimeId: 11385
// TypeInfo: 0x0000000144DB6590
#include "../Core/DataContainerPolicyAsset.h"
#include "../DiceCommonsShared/MeshSlot.h"
#include "../DiceCommonsShared/StrippedUnlockAsset.h"

namespace DiceCommonsShared {
    class BaseDefinition : public Core::DataContainerPolicyAsset {
        Array<DiceCommonsShared::MeshSlot> Slots; // 0x20
        DiceCommonsShared::StrippedUnlockAsset UnlockData; // 0x28
    }; // 0x30
    static_assert(sizeof(BaseDefinition) == 0x30);
}